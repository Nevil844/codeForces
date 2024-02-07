for i in range(int(input())):
    a,b=map(int,input().split())
    a=abs(a)
    b=abs(b)
    count=0
    if a-b==-1 or a-b==1 or a-b==0:
        print(a+b)
    else:
        print(a+b+(abs(a-b)-1))