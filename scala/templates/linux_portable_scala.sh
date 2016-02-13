#!/bin/sh
exec scala "$0" "$@"
!#


object ScalaScript {

	def main(args:Array[String]) = {
		println("This is executable linux script");
	}

}
