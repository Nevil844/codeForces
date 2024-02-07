r1=input()
r2=input()
r3=input()

if r1[0]==r3[2]:
    if r1[1]==r3[1]:
        if r1[2]==r3[0]:
            if r2[0]==r2[2]:
                print("YES")
            else:
                print("NO")
        else:
            print("NO")
    else:
        print("NO")
else:
    print("NO")
