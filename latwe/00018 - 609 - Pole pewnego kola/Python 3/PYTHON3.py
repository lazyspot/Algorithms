import math
input_data = input('')
if input_data == '':
    exit(0)
list = input_data.split(' ')
output = a = b = r_n = 0.000000000
pi = 3.141592654
a = float(list[0])
b = float(list[1])/2
if float(list[1]) >= 2*a:
    output = 0.00
elif float(list[1]) == 0:
    output = pi * a * a
else:
    r_n = math.sqrt((a * a) - (b * b))
    output = pi * r_n * r_n
print (output)
exit(0)
