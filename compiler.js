/**********************************************************************
* 
* compiler.js: compila o arquivo file e executa-o (se o retorno da execução
* for 0, retorna a stdout do arquivo, caso contrário, exibe erro de compi
* lação).
*
***********************************************************************/
module.exports = async function (file, initFilename) {
    const exec = require('child_process').exec;
    

    function sleep(ms) {
        return new Promise((resolve) => setTimeout(resolve, ms));
    }

    //compila com o gcc
    exec('gcc -Werror -Wfatal-errors ' + file + '.c -o ' + file + ' -lm', async function (error, stdout, stderr) {
        if (error) {
            const code = require('./cToNao.js')(error.toString(), initFilename);
            console.log("ERROR: " + code);
        }
        else {

            await sleep(3000);

            exec('.\\' + file, async function (error, stdout, stderr) {
                if (error) {
                    console.log("ERROR: " + error);
                }
                else {
                    console.log(stdout);
                }

                await sleep(3000);

                exec('del ' + file + '*', function (error, stdout, stderr) {
                    console.log("Excluindo");
                });
            })
        }
    })

};