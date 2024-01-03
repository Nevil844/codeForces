x=0
for i in range(int(input())):
    arr = str(input())
    for i in range(len(arr)):
        if arr[i]=="+":
            x+=1
            break
        elif arr[i]=="-":
            x-=1
            break
print(x)