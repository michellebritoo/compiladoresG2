var crypto = require('crypto');

function randomValueHex(len) {
    return crypto.randomBytes(Math.ceil(len / 2))
        .toString('hex')
        .slice(0, len);
};


module.exports = function (bCode, filename) {
    const fs = require('fs');
    const comp = require('./compiler.js');
    const code = require('./naoToC.js')(bCode);

    var rName = randomValueHex(15).toString();


    fs.writeFile(rName + ".c", code, function (err) {
        // se ocorrer erro, retorna JSON 
        if (err) {
            console.log("erro interno");
            return;
        }
        // caso contrário, compila e executa
        process.nextTick(function () {
            comp(rName, filename);
        });
    });
};
