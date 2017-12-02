def dodaj(n):
    n = n.split(' ', 2)
    print(eval(n[0]+"+"+n[1]))
N = int(input())
for i in range(0, N, +1):
    n = input()
    dodaj(n)