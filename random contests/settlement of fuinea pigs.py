import math
for i in range(int(input())):
    n=int(input())
    b=list(map(int,input().split()))
    count=0
    count2=0
    a=0
    for i in range(n-2,-1,-1):
        if b[i]==2:
            temp=i
            a=1
            break

    if a:
        for i in b[:temp]:
            if i==1:
                count+=1
        for i in b[temp:]:
            if i==1:
                count2+=1

        if count+count2==1:
            print(1)
        elif count+count2==0:
            print(0)
        else:
            ans=math.floor(count/2)+1
            print(ans+count2)
    else:
        print(len(b))