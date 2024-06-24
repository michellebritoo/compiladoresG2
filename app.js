const fs      = require('fs');
const nao    = require('./code_exec.js');
const verif   = require('./code_verification.js');

let filename = "./test.txt"

fs.readFile(filename, 'utf8' , async (err, data) => {
    if (err) {
      console.error(err)
      return
    }
    console.log(data)
    if (data == null || verif(data)) {
        console.log("Nada a compilar");
    }
    else
        await nao(data, filename);
})

