while True:
    try:
        if eval(input()) == True:
            print(1)
        else:
            print(0)
    except EOFError:
        exit(0)
