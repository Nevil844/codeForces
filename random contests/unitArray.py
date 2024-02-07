for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    al=sum(a)
    count=0
    count1=0
    for i in range(n):
        if al<0:
            al+=2
            count+=1
        else:
            break
    for i in a:
        if i==-1:
            count1+=1
    if (count1-count)%2!=0:
        count+=1
    print(count)