//Soumik Bhattacharyya, Roll No.-1811155

//Q2. Find n! say for 10 or 15. Check and trap negative integers.

//including library
#include<iostream>
using namespace std;

//declaring the main function
int main()

	{

//declare variables
	double n, product;

	cout << "Please enter a positive integer"<< endl;
	cin>>n;

    product=n;
    
//trapping negative entries
    if (n<0)
    {
    cout << "You've entered a negative number. Please insert a valid input." << endl;
    
    return 0;
    }

//returning for zero
    else if (n==0)
    {
    cout << "The value of 0! is 1." << endl;
    
    return 0;
    }
    
//program to print factorial of a number
    else
        	while(n>1)
		    {
		        n--;
	    		product=product*n;
	    	}
		cout<<"The factorial value equals to "<<product<<endl;

return 0;
	}