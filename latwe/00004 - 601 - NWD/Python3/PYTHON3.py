from math import gcd
t = int(input())
def nwd(a, b):
  print(gcd(int(a), int(b)))
for i in range(0, t, +1):
  a, b = input().split(" ")
  nwd(a, b)