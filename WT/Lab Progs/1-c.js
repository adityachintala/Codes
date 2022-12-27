// c). Write a JavaScript program to remove duplicate items from an array    –  ‘three.js’

var readline = require('readline');

var rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter arr elements : ", (data) => {
    var arr = data.split(" ");
    removeDups(arr);
    rl.close();
});

// instead of input you can just use this array
// var arr = [3, 'a', 'a', 'a', 2, 3, 'a', 3, 'a', 2, 4, 9, 3];
// removeDups(arr);

function removeDups(arr) {
    console.log([...new Set(arr)]);
}