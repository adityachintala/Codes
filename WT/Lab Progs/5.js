// Create a NodeJS programme that allows users to submit text and a file name, and if the file already exists, appends the text to the file. If not, make a fresh file and include the text in it.

var fs = require('fs');

fs.appendFile('file.txt', 'Hello Jello!!!\n', function (err) {
    if (err) throw err;
    console.log('Saved!');
});
