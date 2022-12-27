// Write a JavaScript program to sort a list of elements using Quick sort. –“seven.js”

var readline = require('readline');

var rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter arr elements : ", (data) => {
    var arr = data.split(" ").map(Number);
    console.log(quickSort(arr, 0, arr.length - 1));
    rl.close();
});

// instead of input you can just use this array
// var arr = [36, 5, 3, 4, 67, 8, 56, 3, 2];
// console.log(quickSort(arr, 0, arr.length - 1));

function quickSort(arr) {
    if (arr.length <= 1) {
        return arr;
    }
    let left = [];
    let right = [];
    let pivot = arr.pop();
    let length = arr.length;
    for (let i = 0; i < length; i++) {
        if (arr[i] <= pivot) {
            left.push(arr[i]);
        } else {
            right.push(arr[i]);
        }
    }
    return [...quickSort(left), pivot, ...quickSort(right)];
}