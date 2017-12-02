def calculating(n):
  n = n.split(' ', 2)
  print(int(eval( n[1]+n[0]+n[2])))
while True:
  try:
    calculating(input())
  except EOFError:
    exit(0)
