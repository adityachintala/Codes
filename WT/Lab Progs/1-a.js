// 1.a) Write a JavaScript program which accepts a string as input and swap the case of each character.For example if you input 'The Quick Brown Fox' the output should be 'tHEqUICKbROWNfOX'.   –  “one.js”

var readline = require('readline');

var rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter a string to swap : ", (data) => {
    var str = data;
    var newStr = "";
    for (var i = 0; i < str.length; i++) {
        if (str[i] == str[i].toUpperCase()) {
            newStr += str[i].toLowerCase();
        } else {
            newStr += str[i].toUpperCase();
        }
    }
    console.log(newStr);
    rl.close();
});