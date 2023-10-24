#include<iostream>
using namespace std;
class A
{
	int a=10;
	public:
		friend int add(A,B)
};
class B
{
	int b=20;
	public:
		friend int add(A.B)
};
void add(A r1,B r2)
{
	int sum=r1.a+r2.b;
	cout<<sum;
}
main()
{
	A.01;
	B.02;
	add(01,02);
}
