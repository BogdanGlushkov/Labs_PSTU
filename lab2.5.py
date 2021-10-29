alph = ["a","b"]
p = str(input())
l = len(p)
f = True
k = 0

for i in range(1,l):
    if p[i] not in alph:
        f = True
        break
    else:
        f = False
if f == True:
    print("There is a symbol that is not in the alphabet")
else:
    while ('b') in p:
        p = p.replace('b','',1)
        k += 1
print(p + 'b'*k)
