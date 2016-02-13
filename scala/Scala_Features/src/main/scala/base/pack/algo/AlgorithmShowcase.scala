package base.pack.algo

import base.pack.Demoable

/**
  * Show cases different algorithms in scala
  */
object AlgorithmShowcase extends Demoable {

  val n = 10
  def run() = {

    //Demonstrates the difference between functional and imperative programming
    Quicksort.quicksortImperative(generateRandomInts(n))
    Quicksort.quicksortFunctional(generateRandomInts(n))

  }


  def generateRandomInts(n: Int) : Array[Int] = {
    val r = scala.util.Random
    val dataArray = new Array[Int](n)


    dataArray ++ (0 to n map((x:Int) => {
      r.nextInt(x)
    }))

    return dataArray
  }


}
