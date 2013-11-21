

public class interface_class implements interface_interface
{
	
	public static void main( String args[] )
	{
		interface_interface object = new interface_class();
		object.interfaced_method();
	}

	public interface_class() 
	{
		 System.out.println( "interface class constructed" );
	}

	public void interfaced_method()
	{
		System.out.println( "Interface method called" );
	}



	
	
}
