def reverse(s):
    str = ""
    for i in s:
        str = i + str
    return str

for i in range(int(input())):
    n=int(input())
    s=list(map(str,input().split()))
    ans=[]
    for i in s:
        if len(i)==(n-1):
            ans.append(i)
    
    a=reverse(ans[0])
    b=ans[1]

    if a==b:
        print("YES")
    else:
        print("NO")
        