package base.pack.oop.patterns

import _root_.PatternMatch.Environment


object Evaler {
	def eval(t: Tree, env: Environment): Int = t match {
		case Sum(l, r) => eval(l, env) + eval(r, env)
		case Var(n) => env(n)
		case Const(v) => v
	}
}