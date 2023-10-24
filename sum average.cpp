#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,avg;
	for(i=1;i<=10;i++)
	{
		sum=sum+i;
		cout<<i<<"";
	}
	avg = sum / --i;
	cout<<"\n Sum is="<<sum;
	cout<<"\n Average is="<<avg;
}
