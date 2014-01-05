import System.Environment

main :: IO()


multiply :: (Integral a) => a -> a -> a
multiply a b = a * b


main = 	do
		let multi5 = multiply 5
		putStrLn (show (multiply 5 5))
		putStrLn  (show (multi5 5)) 

