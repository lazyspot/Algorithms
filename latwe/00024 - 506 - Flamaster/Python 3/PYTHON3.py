c = int(input(''))
for i in range(0, c, +1):
    strr = input('')
    output = ""
    char = []
    quantity = 0
    char = list(strr)
    if len(char) == 1:
        print (str(char[0]))
        continue
    for j in range(1, len(char), +1):
        if char[j - 1] == char[j]:
            quantity += 1
            continue
        elif char[j - 1] != char[j] and quantity < 1:
            output += str(char[j - 1])
            quantity = 0
            continue
        elif char[j - 1] != char[j] and quantity == 1:
            output+= str(char[j-1]) + str(char[j-1])
            quantity = 0
            continue
        elif char[j - 1] != char[j] and quantity > 1:
            output += str(char[j - 1]) + str(quantity + 1)
            quantity = 0
            continue
    if j+1 == int(len(char)) and quantity == 0:
        output += str(char[j])
        print (output)
        continue
    if j+1 == int(len(char)) and quantity == 1:
        output += str(char[j]) + str(char[j])
        print (output)
        continue
    if j+1 == int(len(char)) and quantity > 1:
        output += str(char[j]) + str(quantity + 1)
        print (output)
        continue
exit(0)
