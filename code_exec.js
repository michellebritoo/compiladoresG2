var crypto = require('crypto');

function randomValueHex(len) {
    return crypto.randomBytes(Math.ceil(len / 2))
        .toString('hex')
        .slice(0, len);
};


module.exports = function (nCode, filename) {
    const exec = require('child_process').exec;

    function sleep(ms) {
        return new Promise((resolve) => setTimeout(resolve, ms));
    }

    console.log("INICIANDO ANALISE LEXICA \n");
    exec('.\\analise_lexica\\a.exe .\\' + filename, async function (error, stdout, stderr) {
        console.log(stdout);
        if (!error) {
            await sleep(3000);
            exec('.\\analise_sintatica\\a.exe .\\' + filename, async function (error, stdout, stderr) {
                console.log(stdout);
                if (!error) {
                    const code = require('./naoToC.js')(nCode);
                }
            })
        }
    })

};
