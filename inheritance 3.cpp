#include <iostream>
using namespace std;
class alpha
{
	int x;
	public:
		alpha(int x)
		{
		cout<<"	********** Experiment no. - 2.1 **********"<<endl;
		cout<<"\n		   Value of x : "<<x<<endl;
		}
};
class beta
{
	float y;
	public:
		beta(float y)
		{
		cout<<"		   Value of y : "<<y<<endl;
		}
};
class gamma:public alpha,public beta
{
	public:
		gamma(int c,float d,int a,int b):alpha(c),beta(d)
		{
		cout<<"		   Value of a is : "<<a<<endl;
		cout<<"		   Value of b is : "<<b<<endl;
		cout<<"\n	******************************************"<<endl;
		}
};
int main()
{
	gamma obj(10,12.5,14,16);
	return 0;
}
