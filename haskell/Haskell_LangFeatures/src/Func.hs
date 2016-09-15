module Functional (
    execute
) where
import System.Environment



multiply :: (Integral a) => a -> a -> a
multiply a b = a * b

factorial 0 = 1
-- Parenthesis are important
factorial n = n * factorial (n-1)

execute = 	do
		let multi5 = multiply 5
		putStrLn (show (multiply 5 5))
		putStrLn  (show (multi5 5)) 

