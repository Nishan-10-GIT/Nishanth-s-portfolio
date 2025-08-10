start = int(input("Enter the start value : "))
end = int(input("Enter the end value : "))
step = int(input("Enter the step value : "))

lis = []
for i in range (start, end+1, step):
    lis.append(i)

print("The final list is : ", lis)
print("The sum of values in the list are : ", sum(lis))

a,b = map(int,input("Enter two values to check : ").split())
for i in lis:
    if i==a or i==b:
        print("Value found dudee")
   
