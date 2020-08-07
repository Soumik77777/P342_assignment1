//Soumik Bhattacharyya, Roll No.-1811155
//include library
#include<iostream>
using namespace std;

//declare the main function
int main()

	{

//declare variables
	int n, product;

	cout << "Please input a natural number"<< endl;
	cin>>n;

    product=n;
    
//checking if it's a positive number 
    if (n<0)
    {
    cout << "You've entered a negative number. Please insert a valid input." << endl;
    
    return 0;
    }
    
    
    else
    
//program to print factorial of a number

    	while(n>1)
		    {
		        n--;
	    		product=product*n;
	    	}
		cout<<"The value of n! equals to "<<product<<endl;

return 0;
	}
