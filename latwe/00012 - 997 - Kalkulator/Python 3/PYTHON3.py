def multiplication(a,b):
    return a*b
def division(a, b):
    return a/b
def addition(a,b):
    return a+b
def subtraction(a,b):
    return a-b
def modulo(a,b):
    return a%b
output = 0
while True:
    try:
        scan = str(input())
    except EOFError:
        exit(0)
    output = 0
    l = scan.split(' ')
    if l[0] == "+":
        output = addition(int(l[1]), int(l[2]))
    elif l[0] == "-":
        output = subtraction(int(l[1]), int(l[2]))
    elif l[0] == "*":
        output = multiplication(int(l[1]), int(l[2]))
    elif l[0] == "/":
        output = division(int(l[1]), int(l[2]))
    elif l[0] == "%":
        output = modulo(int(l[1]), int(l[2]))
    print (int(output))
