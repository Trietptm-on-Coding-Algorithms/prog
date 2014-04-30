package xom;


import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

import java.net.URL;
import java.net.MalformedURLException;

public class HTML_Retriever {

	public HTML_Retriever() {
		test_network_connection();	
	}


	public void test_network_connection() {
		return;	
	}

	public String retrieveData( String url_string ) throws Exception {
		
		String line = null;
		String data = "";

		InputStream is = null;
		BufferedReader br;

		try {
			URL url = new URL( url_string );
			is = url.openStream();
			br = new BufferedReader ( 
				new InputStreamReader( is ) );
			
			while ( (line = br.readLine()) != null ) {
				data = data + line;
				line = null;
			}
			
			return data;
		} catch ( MalformedURLException mue) {
			throw new Exception( "ERROR:: Url is malformed:: "+ url_string );
		} catch (IOException ioe) {
			throw new Exception( "ERROR:: Cannot establish connection with " + url_string );
		} finally {
			try {
				if ( is != null ) {	is.close(); }
			} catch (IOException ioe) {}
		}
	}
			

	
}
