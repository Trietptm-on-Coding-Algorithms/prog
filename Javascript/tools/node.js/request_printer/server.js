var fs = require('fs'); //library for reading from files
var http = require('http');//library for responding to http requests
var url = require('url');

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
	
var count = 0;
http.createServer( function ( request, response ) {
	response.writeHead( 200, {"Content-Type": "text/html"} );
	getAtRoute( url.parse(request.url).pathname, response );
}).listen(8080);

function getAtRoute( route, response ) {
	if ( route == "/ajax_test" ) {
		response.write( "testtest" );
		response.end();
	} 
	else {
		fs.readFile( "./static/index.html", function( err, file) {
			if (err) {
				console.log( "Cannot find file" );
				return err;
			}
		console.log( "/index.html Sucess" );
		response.end( file, 'utf-8' );
		} );
	}
}
