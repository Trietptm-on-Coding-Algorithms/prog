

//The following is a basic class
function Person(gender) {
	this.gender = gender
	console.log( 'Person Instantiated' );
}

Person.prototype.sayHello = function() { console.log("Hello"); } 
Person.prototype.sayGender = function() { console.log(this.gender); }

//inheritance
function Student() { Person.call(this); }

Student.prototype = new Person();
Student.prototype.constructor = Student;

Student.prototype.sayHello = function() { console.log( "This is a student" ); }

var person1 = new Person('m');
var person2 = new Student('f');

console.log( "Person 1 is :" + person1.gender );

person1.sayHello();
person2.sayGender();
person2.sayHello();
