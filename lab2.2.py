alph = ["a","b","c","d"]
p = str(input())
l = len(p)
f = True

for i in range(1,l):
    if p[i] not in alph:
        f = True
        break
    else:
        f = False
if f == True:
    print("There is a symbol that is not in the alphabet")
else:
    p = p.replace('c','')
    if ('bb') in p:
        p = p.replace('bb','ddd',1)
        print(p)