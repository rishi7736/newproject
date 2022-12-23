#include <iostream>
using namespace std;
class Common
{
	int code;
	char name [50];
	public:
		void input()
		{
			cout<<"			Enter the staff code : ";
			cin>>code;
			cout<<"			Enter the name : ";
			cin>>name;
		}
		void display()
		{
			cout<<"\n			Name : "<<name<<endl;
			cout<<"			Code : "<<code<<endl;
		}
};
class Teacher:public Common
{
	char subject [30];
	int publication;
	public:
		void input1()
		{
			input();
			cout<<"			Mention the subject : ";
			cin>>subject;
			cout<<"			Enter the publication : ";
			cin>>publication;
		}
		void display1()
		{
			display();
			cout<<"			Subject : "<<subject<<endl;
			cout<<"			Publication : "<<publication<<endl;
		}
};
class Officer:public Common
{
	int grade;
	public:
		void input1()
		{
			input();
			cout<<"			Enter the grade : ";
			cin>>grade;
		}
		void display1()
		{
			display();
			cout<<"			Grade : "<<grade<<endl;
			
		}
};
class Typist:public Common
{
	int speed,wage;
	public:
		void input1()
		{
			input();
			cout<<"			Enter the speed : ";
			cin>>speed;
			cout<<"			Enter the daily wage : ";
			cin>>wage;
		}
		void display1()
		{
			display();
			cout<<"			Speed : "<<speed<<endl;
			cout<<"			Daily wage : "<<wage<<endl;
		}
};
int main()
{
	Teacher obj1;
	cout<<"\n		Details of Teacher"<<endl;
	cout<<"		******************"<<endl;
	obj1.input1();
	obj1.display1();
	Officer obj2;
	cout<<"\n		Details of Officer"<<endl;
	cout<<"		******************"<<endl;
	obj2.input1();
	obj2.display1();
	Typist obj3;
	cout<<"\n		Details of Typist"<<endl;
	cout<<"		*****************"<<endl;
	obj3.input1();
	obj3.display1();
		return 0;
}


