for i in range(int(input())):
    n,k=map(int,input().split())
    b=list(map(int,input().split()))
    a=1
    x=1
    factors=[7,17,17,119,289,2023]
    for i in b:
        if i in factors or i==1:
            if i!=1:
                factors.remove(i)
            continue
        else:
            a=0
            print('NO')
            break
    if a:
        print('YES')
        for i in b:
            x=x*i
        # print(x)
        ans=2023//x
        print(ans,end=' ')
        for i in range(k-1):
            print(1,end=' ')