package  base.pack

import base.pack.algo.AlgorithmShowcase
import base.pack.basics.{JavaSyntax, VariableTypes}
import base.pack.lib.JavaLibraries

class App {

  def main(args: Array[String]) {
    println("Starting....");

    val demoList: Array[Demoable] = Array(AlgorithmShowcase, VariableTypes, JavaLibraries, JavaSyntax)

    demoList.foreach((x:Demoable) => {x.run()} )
  }
}
