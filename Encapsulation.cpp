#include<iostream>
using namespace std;
class Encap
{
	private:
		int no;
		string name;
	public:
		int sum1(int a,string b)
		{
			no=a;
			name=b;
			cout<<"No is="<<no<<endl;
			cout<<"Name is="<<name<<endl;
		}
};
int main()
{
	Encap E;
	E.sum1(2,"jayu");
}
