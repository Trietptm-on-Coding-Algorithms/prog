package base.pack.func

/**
  * Created by leeeee on 1/13/16.
  */
object HigherOrderFuncDemo {

  class Decorator(left:String, right:String) {
    def layout[A](x:A) = left + x.toString() + right
  }

  def demo = {
    def apply(f: Int => String, v:Int) = f(v)
    val decorator = new Decorator("[", "]")
    println(apply(decorator.layout, 7))
  }
}
