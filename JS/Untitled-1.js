var fs = require('fs');

// appendFile function with filename, content and callback function

fs.appendFile('parampara.txt', 'Hello', function (err) {
    if (err) throw err;
    console.log("File appended succesfully.");
});