  }
});

const port = 3000;
    res.writeHead(404, { 'Content-Type': 'text/plain' });
    res.end('Not Found');
  else {
    });
  }
        res.end(data);
      }
        res.writeHead(200, { 'Content-Type': 'text/plain'});
        res.end('Internal Server Error'); 
      } else {
const path = require('path');

const server = http.createServer((req, res) => {
  if (req.url === '/') {
    res.writeHead(200, { 'Content-Type': 'text/plain' });
    res.end('Welcome to the server!');
  } 
//   add your else if block here
  else if (req.url === '/message') {
    const filePath = path.join(__dirname, 'public', 'message.txt');

    fs.readFile(filePath, (err, data) => {
      if (err) {
        res.writeHead(500, { 'Content-Type': 'text/plain'});
const http = require('http');
const fs = require('fs');