for i in range(int(input())):
    x=int(input())
    s=input()
    a=1
    for i in range(x):
        for j in range(i+1,x,2):
            if s[i]==s[j]:
                a=0
                break
    if a:
        print("YES")
    else:
        print("NO")