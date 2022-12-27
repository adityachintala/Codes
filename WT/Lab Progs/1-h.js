// Write a JavaScript program to implement Bubble Sort. –“eight.js”

const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter arr elements : ", (data) => {
    var arr = data.split(" ").map(Number);
    bubbleSort(arr);
    rl.close();
});

// instead of input you can just use this array
// var arr = [36, 5, 3, 4, 67, 8, 56, 3, 2];
// bubbleSort(arr);

function bubbleSort(arr) {
    let length = arr.length;
    for (let i = 0; i < length; i++) {
        for (let j = 0; j < length; j++) {
            if (arr[j] > arr[j + 1]) {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
    console.log(arr);
}