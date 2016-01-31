package base.pack.lib.slick


import scala.slick.jdbc.{StaticQuery => Q}
import scala.slick.lifted.TableQuery

object MainSlick extends App {
  
  println("Beginning testing")

  val suppliers: TableQuery[Suppliers] = TableQuery[Suppliers]

  val coffees: TableQuery[Coffees] = TableQuery[Coffees]


  val db = Database.forURL("jdbc:postgresql://localhost:5432/test", driver = "org.postgresql.Driver", user="tester", password="12345")
  
  db.withSession { implicit session =>
    (suppliers.ddl ++ coffees.ddl).create

    suppliers += (101, "acme", "101 st", "Grouville", "CA", "95199")
    suppliers += (102, "abme", "101 st", "Grouville", "CA", "95199")
    suppliers += (103, "agme", "101 st", "Grouville", "CA", "95199")


    val coffeesInsertResult: Option[Int] = coffees ++= Seq (
      ("Colom", 101, 7.99,0,0),
      ("Fresh", 102, 8.99,0,0),
      ("Espresso", 103, 99.99,0,0)
    )

  val allSuppliers: List[(Int, String, String, String, String, String)] = suppliers.list

  coffeesInsertResult foreach { numRows => 
    println("Inserted $numRows rows into the base.pack.lib.Slick.Coffees table")
  }

  println("Generated SQL for base Coffes query:\n" + coffees.selectStatement)

  coffees foreach { case (name, supID, price, sales, total) =>
    println(" " + name + "\t" + supID + "\t" + sales + "\t" + total)
  }


  val filterQuery: Query[Coffees, (String, Int, Double, Int, Int)] =
    coffees.filter(_.price > 9.0)

  println("Generated SQL for filter query:\n" + filterQuery.selectStatement)


  println(filterQuery.list)
  //line 69

  }






}
