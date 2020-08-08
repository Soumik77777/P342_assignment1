#Soumik Bhattacharyya, Roll No.-1811155

#Q3. Sum over 1+ 1/2 + 1/3 + ... till the sum doesn't change by 0.001


#declaring variables
n = int(input("Please enter the maximum denominator:"))

i = 1

sum = 0 

#trapping negative numbers
if n<0:
    print("You've entered a negative number. The denominator should be a positive integer.")

#trapping zero
elif n==0:
    print("The denominator cannot be zero. Please enter a positive number to continue.")
    
else:
    while i <= n and i<=1000:
        sum = sum + 1/i
        i = i + 1
    
    print("The summation of the series equals to", sum)