
var sub = require("./sub/bottles.js").bottles;
var dir = require( "./take.js" ).take;

for( var i = 99; i >= 90; i++ ) {
	Chorus( i );
}
	
var botts = function( n ) {
	console.log( n + " Bottles of beer on the wall," );
}

function Chorus(n ) {
	bottles( n );
	dir.take();
	console.log();
	
}



