#Take input from user
rows = int(input("Please Enter the total Number of rows     : "))
number = 1 #initialise by 1

print("Floydes triangle")
for i in range(1,  rows  + 1):
    for j in range(1,  i  +  1):
        print(number, end =  '  ')
        number = number + 1
    print()