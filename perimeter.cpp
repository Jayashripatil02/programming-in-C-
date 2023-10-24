#include<iostream>
using namespace std;
class some
{
	public:
		int l,b;
		public:
			int read()
			{
				cout<<"Enter l&B="<<endl;
				cin>>l;
				cin>>b;
				cout<<l<<endl;
				cout<<b<<endl;
			}
};
class perimeter:public some
{
	public:
		int findper()
		{
			int per=2*(l+b);
			cout<<per<<endl;
		}
};
class area: public perimeter
{
	public:
		int findarea()
		{
			int a=l*b;
			cout<<a<<endl;
		}
};
int main()
{
	area o;
	o.read();
	o.findper();
	o.findarea();
}
