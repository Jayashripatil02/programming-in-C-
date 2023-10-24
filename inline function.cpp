#include<iostream>
using namespace std;
inline int max(int x,int y)
{
	return (x>y)?x:y;
}
int main()
{
	cout<<"Max(10,20):"<<max(20,10)<<endl;
	cout<<"Max(10,20):"<<max(0,200)<<endl;
	cout<<"Max(10,20):"<<max(1000,200)<<endl;
}
