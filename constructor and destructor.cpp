#include<iostream>
using namespace std;
class abc
{
	public:
		//constructor
		abc()
		{
			cout<<"Constructor called"<<endl;
		}
		//destructor
		~abc()
		{
			cout<<"Destructor called"<<endl;
		}
};
int main()
{
	abc();
	return 0; //constructor called
}
