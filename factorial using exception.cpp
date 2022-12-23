
//Program to print factorial of the given number using exception handling

#include <iostream>
using namespace std;
int main()
{
	int fact=1,n;
	cout<<"\n	Enter the number : ";
	cin>>n;
		try
		{
			if(n<0)
			{
				throw n;
			}
			else
			{
				for(int i=1;i<=n;i++)
				{
					fact=fact*i;
				}
				cout<<"	Factorial of the given number is : "<<fact<<endl;
			}
		}
		catch(int e)
		{
			cout<<"	Invalid input"<<endl;
		}
	return 0;
}
