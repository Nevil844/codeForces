for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=[]
    c=[]
    m=0
    bi=0
    for i in a:
        if i%2==0:
            b.append(i)
            m+=i
        else:
            c.append(i)
            bi+=i
    if m>bi:
        print("YES")
    else:
        print("NO")
    