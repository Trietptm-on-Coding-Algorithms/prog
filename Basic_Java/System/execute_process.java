
import java.io.*;

public class execute_process {

	public static void main( String Args[] ) {
		try {
			Process p = Runtime.getRuntime().exec( "ls -la /home/cy" );
			p.waitFor();
			BufferedReader br = new BufferedReader( new InputStreamReader( p.getInputStream() ) );
			String line = br.readLine();
			while ( line != null ) {
				System.out.println( line );
				line = br.readLine();
			}
		} catch(Exception e) {
			System.out.println( e.toString() );
		} finally {
			System.out.println( "DONE!!!" );
		}	
	}


}
