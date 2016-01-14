import java.util.Scanner;



object variables {
  def main(args: Array[String]) {
    val x = 2 //expression is evaluated at time of definition. Constant value
    var a = 5 //expression is evaluated at time of deinition. Can be set multiple times
   
    //lazy evaluater
    def ys = a+1 //expression is evaluated at time of use. Changes with variables


    
    var in: Scanner = new Scanner(System.in)
    var input = "5"

    while (input != "q") {
      a = java.lang.Integer.parseInt(input)
      println(ys)
      input = in.nextLine;
    }
  }
}
