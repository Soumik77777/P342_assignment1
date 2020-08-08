#Soumik Bhattacharyya, Roll No.-1811155

#Q2. Find n! say for 10 or 15. Check and trap negative integers.


#declaring variables
n = int(input("Please enter a positive integer:"))

i = 1

fact = 1

#trapping negative numbers
if n<0:
    print("You've entered a negative number. Please insert a valid input.")

#returning the value for 0    
elif n==0:
    print("The factorial of 0 is 1")

#for calculating factorial    
else:
    for i in range (1, n + 1):
        fact = fact*i
        
    print("The factorial of", n, "equals to", fact)
    