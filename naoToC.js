
module.exports = function (naoCode) {

    var code = naoCode;

    if (code == null) return "";

    code = code.replace(/(NAO EH INCLUDE STDIO\.H)(?=(?:[^"]|"[^"]*")*$)/g, '#include <stdio.h>');
    code = code.replace(/(NAO EH INCLUDE MATH\.H)(?=(?:[^"]|"[^"]*")*$)/g, '#include <math.h>');
    //Traduzindo a MAIN
    code = code.replace(/(NAO EH MAIN)(?=(?:[^"]|"[^"]*")*$)/g, 'int main (void)');


    //Traduzindo printf
    code = code.replace(/(NAO EH PRINTF)(?=(?:[^"]|"[^"]*")*$)/g, 'printf');
    //Traduzindo scanf
    code = code.replace(/(NAO EH SCANF)(?=(?:[^"]|"[^"]*")*$)/g, 'scanf');

    //Traduzindo if
    code = code.replace(/(NAO EH IF)(?=(?:[^"]|"[^"]*")*$)(.*)({)/g, 'if $2 {');
    //Traduzindo else
    code = code.replace(/(NAO EH ELSE)(?=(?:[^"]|"[^"]*")*$)/g, 'else');
    //Traduzindo else if
    code = code.replace(/(NAO EH ELIF]?)(?=(?:[^"]|"[^"]*")*$)(.*)({)/g, 'else if $2 {');
    //Traduzindo while
    code = code.replace(/(NAO EH WHILE)(?=(?:[^"]|"[^"]*")*$)(.*)({)/g, 'while $2 {');
    //Traduzindo for
    code = code.replace(/(NAO EH FOR)(?=(?:[^"]|"[^"]*")*$)(.*)({)/g, 'for $2 {');
    //Traduzindo os tipos de dados
    code = code.replace(/(NAO EH CHAR)(?=(?:[^"]|"[^"]*")*$)/g, 'char');
    code = code.replace(/(NAO EH INT)(?=(?:[^"]|"[^"]*")*$)/g, 'int');
    code = code.replace(/(NAO EH SHORT)(?=(?:[^"]|"[^"]*")*$)/g, 'short');
    code = code.replace(/(NAO EH LONG)(?=(?:[^"]|"[^"]*")*$)/g, 'long');
    code = code.replace(/(NAO EH DOUBLE)(?=(?:[^"]|"[^"]*")*$)/g, 'double');
    code = code.replace(/(NAO EH FLOAT)(?=(?:[^"]|"[^"]*")*$)/g, 'float');
    code = code.replace(/(NAO EH UNSIGNED)(?=(?:[^"]|"[^"]*")*$)/g, 'unsigned');

    //Colocando as bibliotecas
    code = "#include <stdio.h>\n#include <math.h>\n\n" + code;

    console.log('-----------------------------------------');
    console.log('CODIGO GERADO:');
    console.log(code);
    console.log('-----------------------------------------');

    return code;
}
