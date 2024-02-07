for i in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    arr=[]
    c=0
    for i in range(n):
        count=l.count(i)
        arr.append(count)
    for i in range(len(arr)-1):
        if arr[i+1]<=arr[i]:
            c=1
        else:
            c=0
            break
    if c:
        print("YES")
    else:
        print("NO")