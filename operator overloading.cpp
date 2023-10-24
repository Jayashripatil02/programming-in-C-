#include<iostream>
using namespace std;
class arith
{
	int x,y;
	public:
		void input()
		{
			cout<<"Enter the first number=";
			cin>>x;
		}
		void input2()
		{
			cout<<"Enter the second number=";
			cin>>y;
		}
		arith operator+(arith&ob)
		{
			arith A;
			A.x = x+ob.x;
			return(A);
		}
		void print()
		{
			cout<<"Addition of X and Y="<<x;
		}
};
int main()
{
	arith x1,y1,res;
	x1.input();
	y1.input2();
	res=x1+y1;
	res.print();
	return 0;
}
