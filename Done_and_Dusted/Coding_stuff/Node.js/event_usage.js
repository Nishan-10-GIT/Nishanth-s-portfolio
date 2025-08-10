const EventEmitter = require('events');

const Logger = require('./practice_event');
const logger = new Logger();

logger.on('on', (message) =>{
    console.log('logger is on :' + message)

});

logger.display('Meowwwww')