s=input()
d=s.lower()
vowels='a','e','i','o','u','y'
for i in d:
    if i in vowels:
        d=d.replace(i,'')
for i in d:
    print('.',end="")
    print(i,end="")
print()