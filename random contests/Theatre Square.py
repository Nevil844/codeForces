n,m,a=map(int,input().split())
if m%a==0 and n%a==0:
    print((m//a)*(n//a))
elif m%a==0 and n%a!=0:
    print((m//a)*(n//a)+(m//a))
elif m%a!=0 and n%a==0:
    print((m//a)*(n//a)+(n//a))
else:
    print((m//a)+(n//a)+1+((m//a)*(n//a)))