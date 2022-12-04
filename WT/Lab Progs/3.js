// write a program to remove duplicate elements from an array

var readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

readline.question("Enter elements separated by space : ", function (line) {
    let arr = line.split(' ').map(Number);
    solution(arr);
    readline.close();
})

function solution(arr) {
    let k = new Set(arr);
    console.log([...k]);
}