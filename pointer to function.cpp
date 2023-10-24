#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int(*funptr)(int,int);
	funptr=add;
	int sum=funptr(5,5);
	cout<<"value of sum is:"<<sum<<endl;
	return 0;
}
