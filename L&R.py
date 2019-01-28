vt=int(input("Enter the value"))
xt,yt=map(int,input("Enter the two values").split(' '))
if vt in range(xt+1,yt):
print("yes")
else:print("no")
