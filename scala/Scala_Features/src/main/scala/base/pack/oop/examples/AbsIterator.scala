package base.pack.oop.examples

/**
  * Abstract classes exist in scala
  */
abstract class AbsIterator {
  type T
  def hasNext: Boolean
  def next: T

}
