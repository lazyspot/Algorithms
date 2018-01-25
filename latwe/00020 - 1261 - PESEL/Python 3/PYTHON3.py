a = input()
t = 0
while (int(t)<int(a)):

    i = input()
    j = 0
    j+= (int(i)%10*1)
    i = int(i)/10
    j+= (int(i)%10*3)
    i = int(i)/10
    j+= (int(i)%10*1)
    i = int(i)/10
    j+= (int(i)%10*9)
    i = int(i)/10
    j+= (int(i)%10*7)
    i = int(i)/10
    j+= (int(i)%10*3)
    i = int(i)/10
    j+= (int(i)%10*1)
    i = int(i)/10
    j+= (int(i)%10*9)
    i = int(i)/10
    j+= (int(i)%10*7)
    i = int(i)/10
    j+= (int(i)%10*3)
    i = int(i)/10
    j+= (int(i)%10*1)
    i = int(i)/10
	
    if (int(j)==0):
        print ("N")
    elif (int(j)%10==0):
        print ("D")
    else:
        print ("N")
    t+=1
