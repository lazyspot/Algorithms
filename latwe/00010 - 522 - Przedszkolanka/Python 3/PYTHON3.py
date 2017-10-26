def nww(x,y):
    if x == y:
        return y
    if x < y:
        (x,y)=(y,x)
    c = y
    while True:
        y = y + c
        if y%x == 0:
            return y
N = int(input(''))
for i in range(0, N, +1):
    data = (input('')).split(' ')
    a = int(data[0])
    b = int(data[1])
    output = nww(a,b)
    print (output)
