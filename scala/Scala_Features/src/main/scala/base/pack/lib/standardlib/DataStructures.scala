package base.pack.lib.standardlib

/**
  * Created by leeeee on 8/3/16.
  */
object DataStructures {

  def demoMap = {
    var capital = Map("US" -> "Washington", "Japan" -> "Tokyo")
    capital += ("France" -> "Paris")

    println(capital("France"))
  }
}
