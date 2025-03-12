
num=int(input("Enter a number: "))
sum=0
for digit in str(num):
    sum += int(digit) ** 3
if sum==num:
    print("The number is an Armstrong number")    
else:
    print("The number is not an Armstrong number")
