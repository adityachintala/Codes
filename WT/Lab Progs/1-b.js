// b) . Write a JavaScript program to find the most frequent item of an array.  – “two.js”

var readline = require('readline');

var rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter arr elements : ", (data) => {
    var arr = data.split(" ");
    mostFreq(arr);
    rl.close();
});

// instead of input you can just use this array
// var arr = [3, 'a', 'a', 'a', 2, 3, 'a', 3, 'a', 2, 4, 9, 3];
// mostFreq(arr);

function mostFreq(arr) {
    let dict = {};

    for (let i of arr) {
        if (dict[i]) {
            dict[i]++;
        } else {
            dict[i] = 1;
        }
    }

    let max = 0;
    let maxKey = null;

    for (let key in dict) {
        if (dict[key] > max) {
            max = dict[key];
            maxKey = key;
        }
    }

    console.log(maxKey + " ( " + max + " times ) ");
}