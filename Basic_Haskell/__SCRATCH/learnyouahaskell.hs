

double x = x + x
doubleUs x y = x*2 + y*2


doubleSmallNumber x = if x > 100
			then x
			else x*2


--Demonstrates a function header
addThree :: Int -> Int -> Int -> Int
	-- :: means 'has type of'
	-- Last type is the return type
addThree x y z = x + y + z

--Polymorphic functions - a function that have type variables(abstract undefined type)

head' :: [a] -> a
head' a = a!!0



--demonstrate pattern matching
lucky :: (Integral a) => a -> String
lucky 7 = "Lucky"
lucky x = "Unlucky"

bmiTell :: (RealFloat a) => a -> String
bmiTell bmi
	| bmi <= 18.5 = "underweight"
	| bmi <= 25.0 = "Normal"
	| bmi <= 30.0 = "Fat"
	| otherwise = "Whale status" --otherwise is catch all 


bmiTell' :: (RealFloat a) => a -> a -> String
bmiTell' weight height
	| bmi <= 18.5 = "underweight"
	| bmi <= 25.0 = "Normal"
	| bmi <= 30.0 = "Fat"
	| otherwise = "Whale status" --otherwise is catch all 
	where bmi = weight / height ^ 2 


bmiTell1' :: (RealFloat a) => a -> a -> String
bmiTell1' weight height
	| bmi <= skinny = "underweight"
	| bmi <= normal = "Normal"
	| bmi <= fat = "Fat"
	| otherwise = "Whale status" --otherwise is catch all 
	where 	bmi = weight / height ^ 2 
		skinny = 18.5
		normal = 25
		fat = 30



--Underscore to match any pattern
initials :: String -> String -> String
initials firstname lastname = [f] ++ ". " ++ [l] ++ "."
	where 	(f:_) = firstname
		(l:_) = lastname


--Calculate many bmis using where clause
calcbmiTell2 :: (RealFloat a) => [(a,a)] -> [a]
calcbmiTell2 xs = [ bmi w h | (w,h) <- xs]
	where bmi weight height = weight / height ^ 2 

--Let Bindings will bind  a variable, but it tends to be very local
cylinder :: (RealFloat a) => a -> a -> a
cylinder r h =
	let 	sideArea = 2*pi * r * h
		topArea = pi * r ^ 2
	in	sideArea + 2 * topArea

-- let <bindings> in <expression>
	-- let are essentially a large expression
	-- where bindings are only syntactic constructs
--let can introduce functions in the local syntax
	-- semicolons can be used in placed of tabs

-- case expresions
-- case expression of pattern -> result; pattern -> result; pattern -> result

describeList :: [a] -> String
describeList xs = "The list is " ++ case xs of 	[] -> "empty"
						[x] -> "a singleton list."
						xs -> "a longer list."


--"Recursion Chapter"

maximum' :: (Ord a) => [a] -> a
maximum' [] = error "maximum of empty list"
maximum' [x] = x
maximum' (x:xs)
	| x > maxTail = x
	| otherwise = maxTail
	where maxTail = maximum' xs


--Guards are good for boolean conditions
replicate' :: (Num i, Ord i) => i -> a-> [a]
replicate' n x
	| n <= 0 = []
	| otherwise = x:replicate' (n-1) x


take' :: (Num i, Ord i) => i -> [a] -> [a]
take n
	| n <= 0 = []
take' _ []	= []
take' n (x:xs) 	= x : take' (n-1) xs


reverse' :: [a] -> [a]
reverse' [] = []
reverse' (x:xs) = reverse' xs ++ [x]

repeat' :: a -> [a]
repeat' x = x:repeat' x

zip' :: [a] -> [b] -> [(a,b)]
zip' _ [] = []
zip' [] _ = []
zip' (x:xs) (y:ys) = (x,y):zip' xs ys

elem' :: (Eq a) => a -> [a] -> Bool
elem' a [] = False
elem' a (x:xs)
	| a == x	= True
	| otherwise	= a `elem'` xs

--Wrote this myself
quicksort1 :: (Ord a) => [a] -> [a]
quicksort1 [] = []
quicksort1 (x:xs) =
	quicksort1 [ y | y <- xs, y <= x ] ++ [x] ++ quicksort1 [ y | y <- xs, y > x]


quicksort2 :: (Ord a) => [a] -> [a]
quicksort2 [] = []
quicksort2 (x:xs) =
	let	smallerSorted = quicksort2 [ y | y <- xs, y <= x ]
		biggerSorted = quicksort2 [ y | y <- xs, y > x]
	in smallerSorted ++ [x] ++ biggerSorted

--Higher Order Functions

--curried function
	-- all functions that take more than one parameter are curried
	--currying is returning a function

multThree :: (Num a) => a -> a -> a -> a 
multThree x y z = x * y * z

multTwoWithNine = multThree 9

compareWithHundred :: (Num a, Ord a) => a -> Ordering
compareWithHundred x = compare 100 x

compareWithHundred' :: (Num a, Ord a) => a -> Ordering
compareWithHundred' = compare 100

divideByTen :: (Floating a) => a -> a
divideByTen = (/10)

isUpperAlphanum :: Char -> Bool
isUpperAlphanum = (`elem` ['A'..'Z'])

applyTwice :: ( a -> a) -> a -> a
applyTwice f x = f (f x)


zipWith' :: (a -> b -> c) -> [a] -> [b] -> [c]
zipWith' _ [] _ = []
zipWith' _ _ [] = []
zipWith' f (x:xs) (y:ys) = f x y : zipWith' f xs ys

--create a function then use :t to let haskell determine the type

flip' :: (a -> b -> c) -> (b -> a -> c)
flip' f = g
	where g x y = f y x

map :: (a -> b) -> [a] -> [b]
map _ [] = []
map f (x:xs) = f x : map f xs


