// d) Write a JavaScript program to perform a binary search.    – “four.js”

var readline = require('readline');

var rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter arr elements : ", (data) => {
    var arr = data.split(" ");
    rl.question("Enter key : ", (data) => {
        var key = data;
        console.log(binSearch(arr, key));
        rl.close();
    });
});

// instead of input you can just use this array
// var arr = [1,2,3,4,5,6,7,8,9,10];
// var key = 3;
// console.log(binSearch(arr, key));

function binSearch(arr, key) {
    let low = 0;
    let high = arr.length - 1;
    let mid = Math.floor((low + high) / 2);
    while (low < high) {
        if (key == arr[mid]) {
            return mid+1;
        } else if (key < arr[mid]) {
            high = mid;
        } else {
            low = mid + 1;
        }
        mid = Math.floor((low + high) / 2);
    }
    return -1;
}
