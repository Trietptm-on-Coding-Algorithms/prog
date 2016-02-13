package base.pack.oop.patterns

object Deriver {
	def derive(t: Tree, v: String): Tree = t match {
		case Sum(l, r) => Sum(derive(l, v), derive(r, v))
		case Var(n) if (v == n) => Const(1)
		case _ => Const(0)

	}

}
