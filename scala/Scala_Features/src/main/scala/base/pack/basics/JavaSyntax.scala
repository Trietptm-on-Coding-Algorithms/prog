package base.pack.basics

import base.pack.Demoable

/**
  * JavaSyntax that is also available in Scala
  */
object JavaSyntax extends Demoable {
  override def run() = {
    //Most java structures are valid scala structures
    var i = 0
    var data = Array("1", "2", "5", "6", "q")
    var input = data(i)

    while (input != "q") {
      var a = java.lang.Integer.parseInt(input)
      input = data(i)
      i+=1
    }
  }
}
