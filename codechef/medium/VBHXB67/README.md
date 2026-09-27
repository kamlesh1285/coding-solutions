# VBHXB67

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com

Let's practice serving static files by serving a `.txt` file. In this example, we'll create a simple server that serves a text file.

First, you'll need a text file. Create a new file named `message.txt` inside a new folder named `public`. Add some text to the `message.txt` file, for example, "Hello, world!".

Your task is to modify the following Node.js code to serve this text file when a user requests the `/message` path. Remember to set the correct `Content-Type` header for text files, which is `text/plain`.

### Tasks:
- Add a new else if block to check if req.url === '/message'.
- Inside this block, use fs.readFile() to read the message.txt file from the public directory.
- If there's an error reading the file, send a 500 Internal Server Error response.
- If the file is read successfully, set the Content-Type header to text/plain and send the file data as the response.

After modifying the code, create a `public` folder in the same directory as your Node.js script and place the `message.txt` file inside it.

Change the browsers URL to `YOUR_URL/message`. You should see the content of `message.txt` displayed in your browser.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-27T04:42:13.202Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB67)