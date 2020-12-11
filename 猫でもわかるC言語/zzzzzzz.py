b = 0
a = []
while (b != "@") :
    b = input()
    a.append(b)

c = ''
for i in range(len(a)):
    c += a[i]
    d = c.replace("@", "")
    e = d.replace("        ", " ")
print(e)