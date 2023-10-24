#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		int read()
		{
			cout<<"Enter the value of a=";
			cin>>a;
		}
};
class B : public A
{
	public:
		show()
		{
			cout<<"hieeeee......";
		}
};
int main()
{
	B obj;
	obj.read();
	obj.show();
}
