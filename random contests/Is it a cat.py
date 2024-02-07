for i in range(int(input())):
    n=int(input())
    s=input()
    snew=s.lower()

    snew2=snew[0]

    for i in range(1,n):
        if snew[i-1]!=snew[i]:
            snew2+=snew[i]

    if snew2=="meow":
        print("YES")
    else:
        print("NO")