for i in range(int(input())):
    a,b=map(int,input().split())
    if a>1:
        ans=a-1
    else:
       ans=a+b
    print(ans)