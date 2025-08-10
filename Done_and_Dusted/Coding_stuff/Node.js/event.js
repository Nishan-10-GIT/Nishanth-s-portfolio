const EventEmitter = require('events');
const event = new EventEmitter();

event.on('mom' , (a,b) => {
    console.log('the sum is...' + (a+b))
})

event.emit('mom',1,2);

class Person extends EventEmitter{
    constructor(name){
        super();
        this._name = name;

    }

    get name(){
        return this._name;
    }
}

let pedro = new Person ('Pedro');
let christina = new Person('christina');
christina.on(('name'), ()=>{
    console.log('my name is ' + christina.name);

})

pedro.on('name', function() {
    console.log('my name is ' + this.name);
});

pedro.emit('name');
christina.emit('name');

