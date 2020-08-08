//Soumik Bhattacharyya, Roll No.-1811155

//Q3. Sum over 1+ 1/2 + 1/3 + ... till the sum doesn't change by 0.001


//including library
#include<iostream>
using namespace std;

//declaring the main function
int main()

	{

//declaring variables
	double n;
	double sum=0.0;

	cout << "Please enter the maximum denominator:"<< endl;
	cin>>n;

    double i=1;
    
    
//trapping negative entries
    if (n<0)
    {
    cout << "You've entered a negative number. The denominator should be a positive integer." << endl;
    
    return 0;
    }

//trapping zero
    else if (n==0)
    {
    cout << "You cannot have zero as denominator. It should be a positive integer." << endl;
    
    return 0;
    }

    
//program to sum over 1 to n	
    else
    	while(i<=n and i<=1000)
		{
			sum=sum+(1/i);
			i++;
			
		}
		cout<<"The summation of the series equals to "<<sum<<endl;

return 0;
	}