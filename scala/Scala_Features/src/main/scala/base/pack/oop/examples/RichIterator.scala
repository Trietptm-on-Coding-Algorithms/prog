package base.pack.oop.examples

/**
  * Traits can extend abtract classes
  */
trait RichIterator extends AbsIterator {

  def foreach(f: T=>Unit) { while (hasNext) f(next) }
}
