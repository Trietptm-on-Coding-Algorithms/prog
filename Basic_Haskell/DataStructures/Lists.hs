

let lostNumbers = [4,8,15,16,23,42]

let concatEx = [1,2,3,4,5] ++ [6,7,8,9,10]
let stringsEx = "hello " ++ "world"
let stringSim = [ 'h', 'e', 'l', 'l', 'o', ' ']

-- ++ can take a long time because it walks through the whole list

5:lostnumbers
-- this operator will only add on an item to the beginning

head lostNumbers
tail lostNumbers
last lostNumbers
init lostNumbers
length lostNumbers
null lostNumbers
reverse lostNumbers
take 3 lostNumbers--first 3 items of list
drop 3 lostNumbers
sum lostNumbers
product lostNumbers
elem 15 lostNumbers--checks for an element
cycle lostNumbers --takes a list and cycles it into an infinite list
repeat 5 --creates a list of the item repeated


--Ranges
[1..20]
[2,4..20] --second number indicates step

--List Comprehension
[x*2 | x <- [1..10]]
[x*2 | x <- [1..10], x*2 >= 12]
[ x*y | x<- [2,4..10], y <- [1,3..11]]

length' xs = sum [ 1 | _ <- xs ]


--Tuples

let a = (1,2)
fst a
snd a
zip lostNumbers [1..6]

