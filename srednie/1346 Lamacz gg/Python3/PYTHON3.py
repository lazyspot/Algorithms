import re

slownik1 = {"A": "0", "B": "1", "C": "2", "D": "3", "E": "4", "F": "5", "G": "6", "H": "7", "I": "8", "J": "9",
            "K": "10", "L": "11", "M": "12", "N": "13", "O": "14", "P": "15"}
slownik2 = {"A": "0", "B": "16", "C": "32", "D": "48", "E": "64", "F": "80", "G": "96", "H": "112", "I": "128",
            "J": "144", "K": "160", "L": "176", "M": "192", "N": "208", "O": "224", "P": "240"}

def decoder(n):
    n = re.findall('.',n)
    y = 0
    j = ""
    for i in range (0, 10 ,+1):
        a = n[y]
        b = n[y+1]
        c = int(slownik2[b])+int(slownik1[a])
        c = chr(c)
        j = j+c
        y = y + 2
    print(j)
while True:
    try:
        decoder(input())
    except EOFError:
        exit(0)