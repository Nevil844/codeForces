for i in range(int(input())):
    n=int(input())
    a=[]
    b=[]
    for i in range(n):
        c,d=map(int,input().split())
        a.append(c)
        b.append(d)
    count=0
    for i in range(n):
        if a[i]>b[i]:
            count+=1
    print(count)