var crypto = require('crypto');

function randomValueHex(len) {
    return crypto.randomBytes(Math.ceil(len / 2))
        .toString('hex')
        .slice(0, len);
};


module.exports = function (nCode, filename, run) {
    const exec = require('child_process').exec;
    const fs   = require('fs');

    function sleep(ms) {
        return new Promise((resolve) => setTimeout(resolve, ms));
    }

    console.log("INICIANDO ANALISE LEXICA \n");
    exec('.\\analise_lexica\\a.exe .\\' + filename, async function (error, stdout, stderr) {
        console.log(stdout);
        if (!error) {
            await sleep(3000);
            console.log("INICIANDO ANALISE SINTATICA \n");
            exec('.\\analise_sintatica\\a.exe .\\' + filename, async function (error, stdout, stderr) {
                console.log(stdout);
                if (!error) {
                    const code = require('./naoToC.js')(nCode);
                    if (run == "true"){
                        fs.writeFile(filename + ".c", code, async function (err) {
                            if (err) {
                                console.log("Erro ao gerar aquivo .c | "+ err)
                                return
                            }
                            
                            process.nextTick(async function () {
                                await sleep(3000);
                                exec('gcc ' + filename + '.c -lm && .\\a.exe', function (error, stdout, stderr) {
                                    if (error) {
                                        console.log ("ERRO AO COMPILAR ARQUIVO .C: " + error);
                                    }
                                    else {
                                        console.log (stdout);
                                    }
                                    exec('del ' + filename + '.c && del a.exe', function (error, stdout, stderr) {
                                        console.log ('-----------------------------------------');
                                        console.log ("REMOVENDO ARQUIVO .C");
                                    });
                                })
                            });
                        });
                    }
                }
            })
        }
    })

};
