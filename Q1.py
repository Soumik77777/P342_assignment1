#Soumik Bhattacharyya, Roll No.-1811155

#Q1. Add 1+2+3+... without using the formula n(n+1)/2


#declaring variables
n = int(input("Please enter a positive integer:"))

i = 1

sum = 0 

#trapping negative numbers
if n<0:
    print("You've entered a negative number. Please insert a valid input.")

#calculating summation   
else:
    while i <= n:
        sum = sum + i
        i = i + 1
    
    print("The summation is", sum)