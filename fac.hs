fac 0 = 1
fac n = n * fac (n - 1)

fib 1 = 1
fib 2 = 1
fib n = fib (n-1) + fib (n-2)

ffib a b 2 = a
ffib a b n = ffib(a + b) a(n-1)

fastfib = ffib 1 1 

