#include<iostream>
using namespace std;
int main()
{
	int i,n,c=0;
	cout<<"\nEnter number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c=c+1;
	}
	if(c==2)
	cout<<"is PRIME";
	else
	cout<<"is COMPOSITE";
}
