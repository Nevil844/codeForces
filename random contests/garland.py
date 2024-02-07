for i in range(int(input())):
    s=input()
    a=[]
    count=0
    for i in s:
        a.append(i)
    a=set(a)
    if len(a)==4:
        print(4)
    elif len(a)==3:
        print(4)
    elif len(a)==2:
        a=s[0]
        for i in s:
            if i==a:
                count+=1
        if count==1 or count==3:
            print(6)
        else:
            print(4)
    elif len(a)==1:
        print(-1)