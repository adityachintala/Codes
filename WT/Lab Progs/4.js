// write a program to perform binary search on an array
console.log("Enter elements separated by space in the first line and the element to be searched in the second line : ");
var readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

let il = 1;
let arr;
readline.on('line', function (line) {
    if (il == 1) {
        arr = line.split(' ').map(Number);
        il++;
    }
    else {
        let k = Number(line);
        solution(arr, k);
        readline.close();
    }
})

function solution(arr, k) {
    // arr.sort((a, b) => a - b);
    console.log(arr);
    let l = 0, r = arr.length - 1;
    while (l <= r) {
        let m = Math.floor((l + r) / 2);
        if (arr[m] === k) {
            console.log('Found : ' + m);
            return;
        }
        if (arr[m] < k) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    console.log("Not Found");
}