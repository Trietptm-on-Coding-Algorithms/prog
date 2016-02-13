package base.pack.lib

import java.text.DateFormat._
import java.util.{Scanner, Locale, Date}

import base.pack.Demoable

/**
  * Java libraries can be accessed seamlessly from scala code
  */
object JavaLibraries extends Demoable {

  def run() = {
    val now = new Date
    val df = getDateInstance( LONG, Locale.FRANCE )
    var in: Scanner = new Scanner(System.in)
  }
}
