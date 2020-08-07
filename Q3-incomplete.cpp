//Soumik Bhattacharyya, Roll No.-1811155
//include library
#include<iostream>
using namespace std;

//declare the main function
int main()

	{

//declare variables
	float n,sum;

	cout << "Please input a natural number"<< endl;
	cin>>n;
	int i=1;


//looping

	while(i<=n)
		{
			sum=sum+1/i;
			i++;
		}
		cout<<"The summation equals to "<<sum<<endl;

return 0;
	}
