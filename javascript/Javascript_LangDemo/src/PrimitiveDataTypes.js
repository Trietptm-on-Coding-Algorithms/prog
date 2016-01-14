

var numbers = function() {


  //All numbers are represented as floats
  //specifically 64 bit floats. They are equal to java's double
  var number = 1;
  var number2 = 1.12318749821649872147812641872641872641872;
  var sci = 1e12;
  console.log(number);
  console.log( "1/0 = " + 1/0);
  console.log("0/0 = " + 0/0);
  console.log(number2);
  console.log(sci);


}





var strings = function () {

  var s1 = "I have \"escaped\"";
  console.log(s1);
  var s2 = "I am escaping everything \'\\\/\bbackspace\b\fformfeed\nnewline\rcarriage return\t\u1234 unicode";
  console.log(s2);
  console.log("Length of previous string = " + s2.length);

}

module.exports = {
  numbers: numbers,
  strings: strings

};
