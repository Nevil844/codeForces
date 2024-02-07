s=list(map(str,input()))
l1=[]
ans='h','e','i','d'
ans2='heidi'
count=0

for i in s:
    if i=='h' and count==0:
        count+=1
    elif i=='e' and count==1:
        count+=1
    elif i=='i' and (count==2 or count==4):
        count+=1
    elif i=='d' and count==3:
        count+=1
    
if count==5:
    print("YES")
else:
    print("NO")