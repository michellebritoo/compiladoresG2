const fs      = require('fs');
const nao    = require('./code_exec.js');
const verif   = require('./code_verification.js');

let filename = process.argv.slice(2)[0]

fs.readFile(filename, 'utf8' , async (err, data) => {
    if (err) {
      console.error(err)
      return
    }
    if (data == null || verif(data)) {
        console.log("Nada a compilar");
    }
    else
        await nao(data, filename);
})

