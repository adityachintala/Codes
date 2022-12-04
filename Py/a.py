a,b = input().split(" ")
a = format((int)(a), "b")
b = format((int)(b), "b")
d = 0
if len(a) > len(b):
    for i in range(len(a) - len(b)):
        b = "0" + b
if len(b) > len(a):
    for i in range(len(b) - len(a)):
        a = "0" + a
# print(a + "\n" + b)
for i in range(len(b)):
    if(a[i] != b[i]):
        d+=1
        
print(d)