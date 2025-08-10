lis = []
inp = list(map(int,input("Enter values to be in the list : ").split()))
ma = inp[0]
for i in inp:
    lis.append (i)
    if i>ma:
        ma = i
print("The final list is : ", lis)
print("The max value is : ", ma)


