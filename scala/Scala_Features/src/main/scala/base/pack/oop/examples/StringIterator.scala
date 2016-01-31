package base.pack.oop.examples

/**
  * Created by leeeee on 1/13/16.
  */
class StringIterator(s: String) extends AbsIterator {
  type T = Char
  private var i = 0
  def hasNext = i < s.length()
  //charAt is using whitespace function syntax
  def next = { val ch = s charAt i; i += 1; ch }

}
