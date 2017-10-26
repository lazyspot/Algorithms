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
zest = int(raw_input(''))
for i in range(0, zest, +1):
    dane = (raw_input('')).split(' ')
    a = int(dane[0])
    b = int(dane[1])
    wyn = nww(a,b)
    print wyn
