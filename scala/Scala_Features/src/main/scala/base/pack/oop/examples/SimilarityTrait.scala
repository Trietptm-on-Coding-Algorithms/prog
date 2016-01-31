package base.pack.oop.examples

/**
  * An example trait
  *
  * isNotSimilar is defined using the similar method
  */
trait SimilarityTrait {

  def isSimilar(x: Any): Boolean
  def isNotSimilar(x: Any): Boolean = !isSimilar(x)

}
