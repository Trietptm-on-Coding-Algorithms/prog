import System.IO

main = do
	repeater


repeater = do
	str <- getLine
	putStrLn str
	repeater
