s=input()
t=input()
a=1
vowels='a','e','i','o','u'

for i in range(min(len(s),len(t)):
    if s[i] in vowels and t[i] in vowels:
        continue
    elif s[i] not in vowels and t[i] not in vowels:
        continue
    else:
        a=0

if a:
    print("YES")
else:
    print("NO")