package base.pack.basics

import java.util.Scanner

import base.pack.Demoable


/**
  * Different variable types that are available in scala
  */
object VariableTypes extends Demoable {

  def run() {
    val x = 2 //expression is evaluated at time of definition. Constant value
    var a = 5 //expression is evaluated at time of deinition. Can be set multiple times
    def ys = a+1 //expression is evaluated at time of use. Changes with variables. lazy evaluater


    //Symbol is a literal type
    var sym = 'testsymbol

    var multiLineString =
      """
        |multiline strings are similar
        |to python
        |
      """.stripMargin

    

    var i = 0

  }
}
