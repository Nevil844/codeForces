for i in range(int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))

    if sum(a)>sum(b):
        print("Tsondu")
    elif sum(a)==sum(b):
        print("Draw")
    else:
        print("Tenzing")