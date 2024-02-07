for i in range(int(input())):
    j=input()
    k=input()
    l=input()

    a1=[j[0],j[1],j[2]]
    a2=[k[0],k[1],k[2]]
    a3=[l[0],l[1],l[2]]


    b1=[a1[0],a2[0],a3[0]]
    b2=[a1[1],a2[1],a3[1]]
    b3=[a1[2],a2[2],a3[2]]

    c1=[a1[0],a2[1],a3[2]]
    c2=[a1[2],a2[1],a3[0]]

    if a1[1]==a1[0]==a1[2]:
        ans=a1[0]
    elif a2[1]==a2[0]==a2[2]:
        ans=a2[0]
    elif a3[1]==a3[0]==a3[2]:
        ans=a3[0]
    elif b1[1]==b1[0]==b1[2]:
        ans=b1[0]
    elif b2[1]==b2[0]==b2[2]:
        ans=b2[0]
    elif b3[1]==b3[0]==b3[2]:
        ans=b3[0]
    elif c1[1]==c1[0]==c1[2]:
        ans=c1[0]
    elif c2[1]==c2[0]==c2[2]:
        ans=c2[0]
    else:
        ans="DRAW"
    if ans==".":
        print("DRAW")
    else:
        print(ans)