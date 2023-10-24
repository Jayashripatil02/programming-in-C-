#include<iostream>
using namespace std;
class add
{
	int a,b,c;
	public:
		int read()
		{
			cout<<"Enter value of A&B="<<endl;
			cin>>a>>b;
		}
		int show()
		{
			c=a+b;
			cout<<c;
		}
};
class sub
{
	int a,b,c;
	public:
		int in()
		{
			cout<<"Enter value of A&B="<<endl;
			cin>>a>>b;
		}
		int out()
		{
			c=a-b;
			cout<<c;
		}
};
class mul:public add,public sub
{
	int a,b,c;
	public:
		int get()
		{
			cout<<"Enter value of A&B="<<endl;
			cin>>a>>b;
		}
		int dis()
		{
			c=a*b;
			cout<<c;
		}
};
int main()
{
	mul obj;
	obj.read();
	obj.show();
	obj.in();
	obj.out();
	obj.dis();
	obj.get();
}
