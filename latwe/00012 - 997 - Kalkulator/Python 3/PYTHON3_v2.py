def licz(n):
  n = n.split(' ', 2)
  print(int(eval( n[1]+n[0]+n[2])))
while True:
  try:
    licz(input())
  except EOFError:
    exit(0)