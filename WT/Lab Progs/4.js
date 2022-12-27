// Write a NodeJS program to read from a file and display the content on screen – “readfile.js”

var fs = require('fs');

try {
    var data = fs.readFileSync('file.txt', 'utf8');
    console.log(data);
}
catch (e) {
    console.log('Error:', e.stack);
}