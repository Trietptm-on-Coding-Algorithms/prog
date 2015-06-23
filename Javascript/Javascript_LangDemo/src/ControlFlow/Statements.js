


//var statement
var a = 5;
{
  console.log("I am a block");
}

try {
  throw {message:"HIHI"};
} catch(e) {
  console.log(e);
}

while ( a != 5) {
  a = 5;
}

do {
  a = 4;

} while ( a != 4);


if ( a === 4 ){
  a = 3;
}

for( var b = 4; b > 0; b--) {
  console.log(b);
}
switch (a) {
  case 5:
      console.log("correct");
      break;

}

//label1:


//disruptive statement;
//break;
//return;
//throw;

var d = 0;
outer: for(var c = 55; c > 0; c--) {
  d = 0;
  inner: while ( d < 4 ) {
    d += 1;
    c -= 1;
    if (c <= 45) {
      console.log("Breaking on c = " + c +"d = " + d);
      break outer;
    }
  }
  console.log("c = " + c +"d = " + d);

}
