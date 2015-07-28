package xom;

import xom.HTML_Retriever;

import java.util.Scanner;

public class main {

	public static void main( String[] args ) {
		System.out.println( "xom.main:main() executed" );
		main m = new main();
	}

	public main() {
		testDataRetrieve();
	
	}

	public void testDataRetrieve() {


		Scanner s = new Scanner( System.in );
		HTML_Retriever hr = new HTML_Retriever();

		String input = "";

		do {
			System.out.println( "Enter URL: " );
			input = s.nextLine();

			try {
				System.out.println( hr.retrieveData( input ) );
			} catch ( Exception e ) {
				System.out.println( e.getMessage() );
			}
			
						
		} while ( input.compareTo( "q" ) != 0 );
		
	}

}
