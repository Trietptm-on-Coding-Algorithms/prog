
doubleMe x = x+x
doubleSmallNumber x = if x < 100 
                            then x+x 
                            else x
doubleUs x y = (x+x, y+y)

main = do
    print "Starting...." 
    print (doubleMe 5)
    print (doubleSmallNumber 55)
    tupleSample
    listSamples


tupleSample = do

    print (snd (doubleUs 5 10))
    print (fst (doubleUs 5 10))

listSamples = do
    print ( "hello" ++ " " ++ "world" ) -- Has to walk the list to duplicate
    print ('h':"ello world") -- Instantaneous
    let lostNumbers = [4,8,15,16,23,42]
    print lostNumbers
    print (lostNumbers !! 2) -- get a single element out of list
    let n = [1,2,3,4,5,6]
    print (head n)
    print (tail n)
    print (last n)
    print (init n)

    head []
