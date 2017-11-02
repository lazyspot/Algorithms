t = int(raw_input(""))
day = 86400
for i in range(0, t, +1):
    wyn = second = cookies = box_quantity = mod = 0
    wej_str = raw_input("")
    wej = wej_str.split(" ")
    obz = int(wej[0])
    boxes = int(wej[1])
    for j in range (0, obz, +1):
        second = int(raw_input(""))
        cookies = int(day / second)
        wyn = wyn + cookies
    mod = wyn%boxes
    box_quantity = wyn/boxes
    if mod > 0:
        box_quantity = box_quantity + 1
    print box_quantity
