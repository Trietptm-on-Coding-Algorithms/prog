var fs = require('fs'); //library for reading from files
var http = require('http');//library for responding to http requests

var chat_server = {
	_client_list: {},
	
	receive_message: function() {
		return 1;	
	},
	_send_message: function() {
		return 1;
	}
		
};

//make a http listener


http.createServer( function ( request, response ) {
	//route vs ajax
	console.log( request );
	response.writeHead( 200, {"Content-Type": "text/plain"} );
	response.write( "Hello World" );
	response.end();
}).listen(8080);
