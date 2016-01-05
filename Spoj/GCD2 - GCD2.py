from fractions import gcd
for _ in xrange(input()):
	a, b = map(int, raw_input().split())
	print gcd(a,b) 