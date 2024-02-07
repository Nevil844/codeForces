for i in range(int(input())):
    n,m,h=map(int,input().split())
    t=[]
    for i in range(n):
        t.append(list(map(int,input().split())))
    for i in t:
        i.sort()
    penalty=[]
    solved=[]
    for i in t:
        p=0
        count=0
        temp=[]
        for j in i:
            p+=j
            if p<=h:
                count+=1
                temp.append(p)
                z=1
            else:
                solved.append(count)
                penalty.append(sum(temp))
                z=0
                break
            if z and count==m:
                solved.append(count)
                penalty.append(sum(temp))
                z=0
    rank=1
    for i in range(1,len(solved)):
        if solved[i]>solved[0]:
            rank+=1
        elif solved[i]==solved[0]:
            if penalty[i]<penalty[0]:
                rank+=1
    print(rank)