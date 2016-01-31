package base.pack.oop.examples

/**
  * A simple point with (x,y)
  */
class Point(xc:Int, yc: Int) extends SimilarityTrait {
  var x: Int = xc //The constructor args are vals
  var y: Int = yc //they cannot be changed, so they are
                  //assigned to mutable vars

  def move(dx: Int, dy: Int): Unit = {
    x += dx
    y += dy
  }

  //The constructor args can be accessed
  def getTotalMovement(): (Int,Int) = {
    (x-xc, y-yc)
  }
  override def toString(): String = "(" + x + ", " + y + ")";

  override def isSimilar(x: Any): Boolean =
      x.isInstanceOf[Point] && x.asInstanceOf[Point].x == x
}
