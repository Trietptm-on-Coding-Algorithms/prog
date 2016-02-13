package base.pack.func

import base.pack.Demoable

/**
  * Demonstrates anonymous function syntax
  */
object AnonymousFunctions extends Demoable {

  type tripleInt = (Int,Int) => Int

  //Is equivalent to interface Function2[Int,Int,Int]
  def getAnonymousMathFunction(): (Int,Int) => Int = {
    (x:Int, y: Int) => {x*y}
  }

  def getAnonymousMathFunctionV() = {
    new Function1[Int, Int] {
      def apply(x:Int): Int = x*1
    }
  }

  def getAnonymousNoArg = () => System.getProperty("user.dir")


  def run() = {
    var f1: tripleInt = getAnonymousMathFunction()
    var f2: (Int,Int) => Int = getAnonymousMathFunction()
    var f3 = getAnonymousMathFunctionV
    var f4: (Int)=> Int = getAnonymousMathFunctionV()

  }
}
