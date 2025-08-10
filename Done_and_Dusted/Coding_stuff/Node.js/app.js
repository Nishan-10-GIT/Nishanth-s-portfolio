const http = require('http');

const server = http.createServer((req,res) => {
    if (req.url === '/') {
        res.write('Helllo boiiiii');
        res.end();
    }
    else {res.write('404 Not found....')
        res.end();}
        
    

});




server.listen(3000);

console.log('Listening on port 3000...');