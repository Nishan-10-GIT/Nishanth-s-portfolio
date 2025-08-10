#Long format

"""num = list(map(int, input("Enter your numbers seperated by a space da macha : ").split()))

odd_num = []
even_num = []

for i in range(len(num)):
    n = num[i]
    print(f"The number {i+1} is {n}")

    if n%2 == 0:
        print("Its an even number")
        even_num.append(n)
    else:
        print("Its an odd number")
        odd_num.append(n)

print("The final odd numbers are : ", odd_num)
print("The sum of odd numbers only are : ", sum(odd_num))
print("The final even numbers are : ", even_num)
print("The sum of even numbers only are : ", sum(even_num))        

print("The numbers you gave are : ", num)
print("The number of numbers you gave are", len(num))
"""


# Short format :

numbers = list(map(int, input("Enter your numbers ").split()))
odd_numbers = list(num for num in numbers if num %2 == 1)
even_numbers = list(num for num in numbers if num %2 == 0)

print("The sum of odd numbers are", sum(odd_numbers))
print("The sum of even numbers are", sum(even_numbers))
