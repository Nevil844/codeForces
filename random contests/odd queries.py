for i in range(int(input())):
    n,q=map(int,input().split())
    a=list(map(int,input().split()))
    for i in range(q):
        b=[]
        for i in a:
            b.append(i)
        l,r,k=map(int,input().split())
        for i  in range(l-1,r):
            b[i]=k
        if sum(b)%2!=0:
            print("YES")
        else:
            print("NO")