import javax.swing.*;

public class Swing extends JFrame {

	public Swing() {
		super( "hello" );
		super.setDefaultCloseOperation( WindowConstants.EXIT_ON_CLOSE );		super.add( new JLabel( "Swing, World!" ) );
		super.pack();
		super.setVisible( true );
	}

	public static void main( final String[] args ) {
		new Swing();
	}
}
