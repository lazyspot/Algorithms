n, char = input().split(" ")
for x in range(2):
	for y in range(int(n)):
		print(char * (y+1))
for x in range(int(n)):
	print(char)
