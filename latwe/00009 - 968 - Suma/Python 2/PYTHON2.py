output = a = 0
scan = ''
while True:
	try:
		scan = raw_input()
	except EOFError:
		exit(0)
	if scan == '':
		exit(0)
	else:
		a = int(scan)
		output = output + a
	print output
exit(0)
