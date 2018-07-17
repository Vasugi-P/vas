n=int(input())
flag=0
for i in range(1,n//2):
    if(n%i==0):
        flag=flag+1
if(flag==0):
    print("yes")
else:
    print("no")
