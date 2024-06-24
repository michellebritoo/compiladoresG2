
module.exports = function (naoCode) {

    var code = naoCode;

    if (code == null) return "";

    code = code.replace(/(NAO EH INCLUDE STDIO\.H)(?=(?:[^"]|"[^"]*")*$)/g, '#include <stdio.h>');
    code = code.replace(/(NAO EH INCLUDE MATH\.H)(?=(?:[^"]|"[^"]*")*$)/g, '#include <math.h>');

    //Traduzindo a MAIN
    code = code.replace(/(NAO EH MAIN)(?=(?:[^"]|"[^"]*")*$)/g, 'int main (void) {');

    //Traduzindo o }
    code = code.replace(/(NAO EH O FIM)(?=(?:[^"]|"[^"]*")*$)/g, '}');

    //Traduzindo printf
    code = code.replace(/(NAO EH PRINT)(?=(?:[^"]|"[^"]*")*$)/g, 'printf');
    //Traduzindo scanf
    code = code.replace(/(NAO EH SCAN)(?=(?:[^"]|"[^"]*")*$)/g, 'scanf');

    //Traduzindo if
    code = code.replace(/(NAO EH IF)(?=(?:[^"]|"[^"]*")*$)(.*)/g, 'if $2 {');
    //Traduzindo else
    code = code.replace(/(NAO EH ELSE)(?=(?:[^"]|"[^"]*")*$)/g, '} else {');
    //Traduzindo else if
    code = code.replace(/(NAO EH ELIF]?)(?=(?:[^"]|"[^"]*")*$)(.*)/g, '} else if $2 {');
    //Traduzindo while
    code = code.replace(/(NAO EH WHILE)(?=(?:[^"]|"[^"]*")*$)(.*)/g, 'while $2 {');
    //Traduzindo for
    code = code.replace(/(NAO EH FOR)(?=(?:[^"]|"[^"]*")*$)(.*)/g, 'for $2 {');

    // //Traduzindo declaração de função
    // code = code.replace(/(O[H]? O HOM[EI][M]? A[IÍ] PO[ \t]*\()(?=(?:[^"]|"[^"]*")*$)(.*)(\))/g, '$2 {');
    // //Traduzindo retorno da função
    // code = code.replace(/(BORA CUMPAD[EI])(?=(?:[^"]|"[^"]*")*$)/g, 'return');
    // //Traduzindo chamada de função
    // code = code.replace(/(AJUDA O MALUCO TA DOENTE)(?=(?:[^"]|"[^"]*")*$)/g, ' ');
    // code = code.replace(/(AJUDA O MALUCO QUE TA DOENTE)(?=(?:[^"]|"[^"]*")*$)/g, ' ');
    // //Traduzindo parada no código
    // code = code.replace(/(SAI FILH[OA] DA PUTA)(?=(?:[^"]|"[^"]*")*$)/g, 'break');
    // //Traduzindo continuar o código
    // code = code.replace(/(VAMO MONSTRO)(?=(?:[^"]|"[^"]*")*$)/g, 'continue');

    //Traduzindo os tipos de dados
    code = code.replace(/(NAO EH CHAR)(?=(?:[^"]|"[^"]*")*$)/g, 'char');
    code = code.replace(/(NAO EH INT)(?=(?:[^"]|"[^"]*")*$)/g, 'int');
    code = code.replace(/(NAO EH SHORT)(?=(?:[^"]|"[^"]*")*$)/g, 'short');
    code = code.replace(/(NAO EH LONG)(?=(?:[^"]|"[^"]*")*$)/g, 'long');
    code = code.replace(/(NAO EH DOUBLE)(?=(?:[^"]|"[^"]*")*$)/g, 'double');
    code = code.replace(/(NAO EH FLOAT)(?=(?:[^"]|"[^"]*")*$)/g, 'float');
    code = code.replace(/(NAO EH UNSIGNED)(?=(?:[^"]|"[^"]*")*$)/g, 'unsigned');

    console.log('-----------------------------------------');
    console.log('CODIGO GERADO:');
    console.log(code);
    console.log('-----------------------------------------');

    return code;
}