#include<iostream>
using namespace std;
class A
{
	public:
		virtual void show()
		{
			cout<<"base class called:";
		}
};
class B:public A
{
	void show()
	{
		cout<<"derived class called:";
	}
};
int main()
{
    B b1;
    A*a1=&b1;
    a1->show();
    return 0;
}
