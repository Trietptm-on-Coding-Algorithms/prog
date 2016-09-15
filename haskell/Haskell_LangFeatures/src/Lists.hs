
module Lists 
(
    execute
) where


execute = do

	let lostNumbers = [4,8,15,16,23,42]

	let concatEx = [1,2,3,4,5] ++ [6,7,8,9,10]
	let stringsEx = "hello " ++ "world"
	let stringSim = [ 'h', 'e', 'l', 'l', 'o', ' ']

	-- ++ can take a long time because it walks through the whole list

	print (5:lostNumbers)
	-- this operator will only add on an item to the beginning

	print (head lostNumbers)
	print (tail lostNumbers)
	print (last lostNumbers)
	print (init lostNumbers)
	print (length lostNumbers)
	print (null lostNumbers)
	print (reverse lostNumbers)
	print (take 3 lostNumbers)--first 3 items of list)
	print (drop 3 lostNumbers)
	print (sum lostNumbers)
	print (product lostNumbers)
	print (elem 15 lostNumbers)--checks for an element)
	--Infinite List do not print
	--print (cycle lostNumbers) --takes a list and cycles it into an infinite list)
	--Infinite list do not print
	--print (repeat 5) --creates a list of the item repeated)


--Ranges
	print ([1..20])
	print ([2,4..20]) --second number indicates step)

--List Comprehension
	print ([x*2 | x <- [1..10]])
	print ([x*2 | x <- [1..10], x*2 >= 12])
	print ([ x*y | x<- [2,4..10], y <- [1,3..11]])




--Tuples

	let a = (1,2)
	print (fst a)
	print (snd a)
	print (zip lostNumbers [1..6])

	print ("Success")

length_2 xs = 
	sum [ 1 | _ <- xs ]
