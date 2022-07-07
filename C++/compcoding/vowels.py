import psyco
psyco.full()
t=int.input()
while t>0:
    s=input()
    for i in s:
        if s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u':
            s= s[:0] + s[0:i][::-1] + s[i:]
    t=t+1
    print(s)



