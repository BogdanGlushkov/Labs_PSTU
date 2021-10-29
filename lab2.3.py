f = True
alph = ['a','b']
p = str(input())
l = len(p)

for i in range(1,l):
    if p[i] not in alph:
        f = True
        break
    else:
        f = False
if f == True:
    print("There is a symbol that is not in the alphabet")
else:
    print(p + "a")  