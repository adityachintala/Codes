// Print the most frequent item in an array

const { listenerCount } = require('process');

function solution(arr) {
    let k = new Set(arr);
    let ans, count = 0;
    k.forEach( i => {
        if (arr.filter((x) => x == i).length > count) {
            count = arr.filter((x) => x == i).length;
            ans = i;
        }
    });
    console.log(ans);
}

var readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

readline.question("Enter elements separated by space : ", function (line) {
    let arr = line.split(' ').map(Number);
    solution(arr);
    readline.close();
})
