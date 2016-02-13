package base.pack.oop

import scala.collection.mutable

/**
  * Basic OOP Demo
  *
  */
object OopDemo {

  /**
    *   Scala has a unified type hierachy
    * instead of a bunch of independent types. Everything falls into a single hierarchy
    *
    * http://docs.scala-lang.org/resources/images/classhierarchy.img_assist_custom.png
    */
  class Test(v: Int)

  def anyTypeDemo() = {
    val set = new mutable.LinkedHashSet[Any]
    set += "A string"
    set += 732
    set += 'c'
    set += true
    set += new Test(5)

    val iter: Iterator[Any] = set.iterator
    while (iter.hasNext) {
      var next = iter.next
    }
  }


}
