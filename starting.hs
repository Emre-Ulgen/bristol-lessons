modulus = [ x | x <- [50..100], x `mod` 7 == 3]

notEqual = [ x | x <- [10..20], x /= 13, x /= 15, x /= 19] 

first = fst (8,11)  
second = snd ("Wow", False)

zipping = zip [1,2,3,4] ['E','M','R','E']

rightTriangles =[ (a,b,c) | c <- [1..50], b <- [1..c], a <- [1..b], a^2 + b^2 == c^2]