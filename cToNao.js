
module.exports = function (cCode, filename) {
    var code = cCode;

    if (code == null) return "";

    code = code.replace(/(NAO EH INCLUDE STDIO\.H)(?=(?:[^"]|"[^"]*")*$)/g, '#include <stdio.h>');
    code = code.replace(/(NAO EH INCLUDE MATH\.H)(?=(?:[^"]|"[^"]*")*$)/g, '#include <math.h>');

    //Traduzindo a MAIN
    code = code.replace(/(int main \(void\) {)(?=(?:[^"]|"[^"]*")*$)/g, 'NAO EH MAIN');
    //Traduzindo printf
    code = code.replace(/(printf)(?=(?:[^"]|"[^"]*")*$)/g, 'NAO EH PRINT');
    //Traduzindo scanf
    code = code.replace(/(scanf)(?=(?:[^"]|"[^"]*")*$)/g, 'NAO EH SCAN');
    //Traduzindo else if
    code = code.replace(/(} else if)(?=(?:[^"]|"[^"]*")*$)(.*)({)/g, 'NAO EH ELIF $2');
    //Traduzindo else
    code = code.replace(/(} else {)(?=(?:[^"]|"[^"]*")*$)/g, 'NAO EH ELSE');
    //Traduzindo if
    code = code.replace(/(if)(?=(?:[^"]|"[^"]*")*$)(.*)/g, 'NAO EH IF $2');
    //Traduzindo o }
    code = code.replace(/(})(?=(?:[^"]|"[^"]*")*$)/g, 'NAO EH O FIM');

    // //Traduzindo while
    // code = code.replace(/(NEGATIVA BAMBAM)(?=(?:[^"]|"[^"]*")*$)(.*)/g, 'while $2 {');
    // //Traduzindo for
    // code = code.replace(/(MAIS QUERO MAIS)(?=(?:[^"]|"[^"]*")*$)(.*)/g, 'for $2 {');
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
    code = code.replace(/(char)(?=(?:[^"]|"[^"]*")*$)/g, 'FRANGO');
    code = code.replace(/(integer)(?=(?:[^"]|"[^"]*")*$)/g, 'MONSTRO');
    code = code.replace(/('\bint\b')(?=(?:[^"]|"[^"]*")*$)/g, '\'MONSTRO\'');
    code = code.replace(/(\bint\b)(?=(?:[^"]|"[^"]*")*$)/g, 'MONSTRO');
    code = code.replace(/(short)(?=(?:[^"]|"[^"]*")*$)/g, 'MONSTRINHO');
    code = code.replace(/(long)(?=(?:[^"]|"[^"]*")*$)/g, 'MONSTRÃO');
    code = code.replace(/(double)(?=(?:[^"]|"[^"]*")*$)/g, 'TRAPÉZIO DESCENDENTE');
    code = code.replace(/(float)(?=(?:[^"]|"[^"]*")*$)/g, 'TRAPÉZIO');
    code = code.replace(/(unsigned)(?=(?:[^"]|"[^"]*")*$)/g, 'BÍCEPS');


    code = code.replace(/(Error: Command failed: gcc -Werror -Wfatal-errors [a-zA-Z0-9]+\.c -o [a-zA-Z0-9]+ -lm)(?=(?:[^"]|"[^"]*")*$)/g, 'Erro ao compilar ' + filename + '\n');
    code = code.replace(/([a-zA-Z0-9]+\.c)(?=(?:[^"]|"[^"]*")*$)/g, filename);
    code = code.replace(/(\.\/[a-zA-Z0-9]+\.[a-zA-Z0-9]+: In function '[a-zA-Z]+':)(?=(?:[^"]|"[^"]*")*$)/g, '');

    return code;
}
