pierw_spr = []
for i in range(0, 10001, +1):
    pierw_spr.append(0)
for a in range(2, 10001, +1):
    c = a
    if pierw_spr[a] == 0:
        pierw_spr[a] = 1
    while a+c < 10001:
        a = a+c
        pierw_spr[a] = 2
zest = int(input(''))
for i in range(0, zest, +1):
    licz = int(input(''))
    if pierw_spr[licz] == 1:
        print ("TAK")
    else:
        print ("NIE")
exit(0)
