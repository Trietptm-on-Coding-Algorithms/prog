package base.pack.func

/**
  * Demo of nested functions. Scope is shared
  */
object NestedFunctions {

  def demo = {
    def filter(xs: List[Int], threshold:Int) = {
      def process(ys: List[Int]): List[Int] =
        if (ys.isEmpty) ys
        else if (ys.head < threshold) ys.head :: process(ys.tail)
        else process(ys.tail)

      process(xs)
    }

    println(filter(List(1,2,3,4,5,6),5))
  }

}
