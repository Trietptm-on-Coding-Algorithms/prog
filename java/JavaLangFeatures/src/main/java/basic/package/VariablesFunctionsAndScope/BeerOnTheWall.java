
import sub.OnTheWall;
import Beer;

//Java 7

//All methods are static because I am not creating a non-static instance(a class)

public class BeerOnTheWall {

	public static void main( String[] args ) {
		BeerLoop();
				
	}
	
	public static void BeerLoop() {
		
		for( int i = 99; i <=90; i++ ) {
			System.out.print( i );
			bottles();
			OnTheWall.onTheWall();
			System.out.println();
			System.out.print( i );
			bottles();
			Beer.beer();
			System.out.println();
			System.out.print( i-1 );
			bottles();
			OnTheWall.onTheWall();
		}
	}
}

public static void bottles() {
	System.out.print( " bottles of beer," );
}
