a = int(input(''))
for i in range(0, a, +1):
	s = result = ''
	l = []
	s = str(input(''))
	l = s.split(' ')
	l3 = list(l)
	l3.remove(l3[0])
	l3.reverse()
	for j in range(0, len(l3), +1):
		if j < len(l3)-1:
			result += str(l3[j]) + " "
		else:
			result += str(l3[j])
	print (result)
