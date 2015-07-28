package sel_test;

import com.thoughtworks.selenium.DefaultSelenium;
import com.thoughtworks.selenium.CommandProcessor;

public class sel_runner {

	public sel_runner() {

		DefaultSelenium ds = new DefaultSelenium( new CommandProcessor() );	
	}

}
