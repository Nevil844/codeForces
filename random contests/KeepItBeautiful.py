for i in range(int(input())):
    q=int(input())
    x=list(map(int,input().split()))
    a=[1]
    b=True
    c=0
    d=0
    for i in range(1,q):
        if x[i-1]<=x[i] and b:
            a.append(1)
        elif b:
            a.append(1)
            b=False
        elif b==False and x[i-1]<=x[i] and x[i]<=x[0] and d>=1:
            a.append(1)
        elif b==False and x[i-2]>=x[i] and c>=1 and d==0:
            a.append(1)
            d=1
        else:
            a.append(0)
            c+=1
    [print(i,end='') for i in a]
    print()