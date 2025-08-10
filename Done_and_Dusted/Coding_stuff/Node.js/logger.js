const Eventemitter = require('events');



var urk = "http://logger_goes_burr";

class Logger extends Eventemitter{
    log(message){
        console.log("the message is  : " + message);
    
    this.emit('Login' , 'Nishanth',48)
    }
}

module.exports = Logger;





