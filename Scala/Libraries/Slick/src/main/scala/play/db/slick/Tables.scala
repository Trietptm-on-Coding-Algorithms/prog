import scala.slick.driver.PostgresDriver.simple._
import scala.slick.lifted.{ProvenShape, ForeignKeyQuery}


class Suppliers( tag: Tag) 
  extends Table[(Int, String, String, String, String, String)](tag, "SUPPLIERS") {
  
    def id: Column[Int] = column[Int]("SUP_ID", O.PrimaryKey)
    def name: Column[String] = column[String]("SUP_NAME")
    def street: Column[String] = column[String]("STREET")
    def city: Column[String] = column[String]("CITY")
    def state: Column[String] = column[String]("STATE")
    def zip: Column[String] = column[String]("ZIP")

    def * : ProvenShape[(Int, String, String, String, String, String)] =
      (id, name, street, city, state, zip)
       
}


class Coffees(tag: Tag) 
  extends Table[(String, Int, Double, Int, Int)](tag, "COFFEES") {

    def name: Column[String] = column[String]("COF_NAME", O.PrimaryKey)
    def supID: Column[Int] = column[Int]("SUP_ID")
    def price: Column[Double] = column[Double]("PRICE")
    def sales: Column[Int] = column[Int]("SALES")
    def total: Column[Int] = column[Int]("TOTAL")

    def * : ProvenShape[(String, Int, Double, Int, Int)] =
      (name, supID, price, sales, total)

    def supplier: ForeignKeyQuery[Suppliers, (Int,String, String, String, String, String)] =
      foreignKey("SUP_FK", supID, TableQuery[Suppliers])(_.id)
  
}
