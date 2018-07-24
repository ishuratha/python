fname=input("Enter a file name:")
num_space=0
with open(fname,'r')as f:
for line in f:
space=line.split()
num_space+=len(space)
print("num of space:")
print(num_space)
