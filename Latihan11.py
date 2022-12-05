import math

a = lambda x: x ** 2
print(a(46))

b = lambda x,y: x**2 + y**2
print(b(4,6))

c = lambda *args : sum(args)/len(args)
print(c(5,7,9,11,10))

d = lambda s: "".join(set(s))
print(d("Tertimpa"))