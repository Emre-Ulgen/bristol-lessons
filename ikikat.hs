ikikat [] = []
ikikat (x:xs) = (x*2):(ikikat xs)
-- >>> ikikat [1,2,3,4]
