
module.exports = function (naoCode) {
    return naoCode.match(/((#.*include.*)|(system)|(popen)|(fopen)|(fgets)|(execl))/g);
}
