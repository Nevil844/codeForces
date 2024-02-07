s=list(map(str,input()))
l1=[]
ans='h','e','i','d'
ans2='heidi'

for i in s:
    if i in ans:
        l1.append(i)

l2="".join(l1)
print(l2)

if l2 in ans:
    print("YES")
else:
    print("NO")