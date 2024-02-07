n=int(input())
for i in range(n):
    w=input()

    if len(w)<=10:
        print(w)
    else:
        print(w[0],end="")
        print(len(w)-2,end="")
        print(w[-1],end="")
        print()