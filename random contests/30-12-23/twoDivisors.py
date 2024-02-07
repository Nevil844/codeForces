def my_function(ans,b):
    if(ans==b):
        print(b*2)
    elif(ans%2!=0):
        print(ans)
    else:
        ans=ans//2
        my_function(ans,b)

for i in range(int(input())):
    a,b=map(int,input().split())
    ans=a*b
    if (ans==b):
        print(b*2)
    else:
        my_function(ans,b)