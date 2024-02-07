import math

for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    value=[]
    b=0
    for i in range(1,n):
        if a[i-1]<=a[i]:
            value.append(a[i]-a[i-1])
            b=1
        else:
            b=0
            break
    if b==0:
        ans=0
    elif b==1:
        ans=(min(value)+1)/2

    print(math.ceil(ans))
