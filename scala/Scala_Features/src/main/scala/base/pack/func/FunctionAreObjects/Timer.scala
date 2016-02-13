package base.pack.func.FunctionAreObjects

object Timer {
	def oncePerSecond( callback: () => Unit ) {
		while (true) { callback(); Thread sleep 1000 }
	}
	def timeFlies() {
		println( "time flies like an arrow..." )
	}
	
	def demo() {
		oncePerSecond(timeFlies)
	}
}
