package base.pack.oop.examples

/**
  * Contains the IntSet Example
  *  Abstract class hierarchy
  */
package object intset {

  /**
    * Abstract classes behaves the same as java abstract classes
    */
  abstract class IntSet {
    def incl(x: Int): IntSet

    def contains(x: Int): Boolean

    def union(other: IntSet): IntSet
  }

  /**
    * The non empty class
    * @param elem
    * @param left
    * @param right
    */
  class NonEmpty(elem: Int, left: IntSet, right: IntSet) extends IntSet {
    def contains(x: Int): Boolean =
      if (x < elem) left contains x
      else if (x > elem) right contains x
      else true

    def incl(x: Int): IntSet =
      if (x < elem) new NonEmpty(elem, left incl x, right)
      else if (x > elem) new NonEmpty(elem, left, right incl x)
      else this

    def union(other: IntSet): IntSet =
      ((left union right) union other) incl elem

    override def toString = "{" + left + elem + right + "}"

  }

  class Empty extends IntSet {
    def contains(x: Int): Boolean = false

    def incl(x: Int): IntSet = new NonEmpty(x, new Empty, new Empty)

    def union(other: IntSet): IntSet = other

    override def toString = "."
  }

  def demoIntSet() = {


      var t1: IntSet = new NonEmpty(3, new Empty, new Empty)
      t1 = t1.incl(5)
      t1 = t1.incl(11)
      var t2: IntSet = new NonEmpty(5, new Empty, new Empty)
      t2 = t2.incl(9)
      t2 = t2.incl(11)
      println(t1 union t2)

  }

}
