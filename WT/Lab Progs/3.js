// 3) Write a Node JS program that accepts a port from the user and runs a node server at that port  --“server.js”

var http = require('http');

var read = require('readline');

var rl = read.createInterface(process.stdin, process.stdout);

rl.question("Enter the port number: ", function (port) {
    
    http.createServer(function (req, res) {
    
        res.writeHead(200, { 'Content-Type': 'text/html' });
    
        res.end('Hello ' + req.url.slice(1) + '!');
    
    }).listen(port);
    
    console.log('Server running at http://127.0.0.1:' + port + '/');
    rl.close();
});
