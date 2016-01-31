package base.pack.oop

import _root_.PatternMatch.Environment

class TreePatternMatchTest {
    def main(args: Array[String]) {
      val exp: TreePatternMatchTest = Sum(Sum(Var("x"), Var("x")), Sum(Const(7), Var("y")))
      val env: Environment = {
        case "x" => 5
        case "y" => 7
      }

      println("Expression: " + exp)
      println("Evaluation with x=5, y=7: " + eval(exp, env))
      println("Derivative relative to x:\n " + derive(exp, "x"))
      println("Derivative relative to y:\n " + derive(exp, "y"))
    }
  }