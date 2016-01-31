package base.pack.func.anonymous

/**
  * Demonstrates anonymous function syntax
  */
object MathFunctionAnonymous {

  //Is equivalent to interface Function2[Int,Int,Int]
  def getAnonymousMathFunction: (Int,Int) => Int = {
    (x:Int, y: Int) => x*y
  }

  def getAnonymousMathFunctionV = {
    new Function1[Int, Int] {
      def apply(x:Int): Int = x+1
    }
  }

  def getAnonymousNoArg = () => System.getProperty("user.dir")


}
