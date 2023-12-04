#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"\nConstructor of A Called";
		}
};
class X:virtual public A
{
	public:
		X()
		{
			cout<<"\nConstructor of X Called";
		}
};
class Y:virtual public A
{
	public:
		Y()
		{
			cout<<"\nConstructor of Y Called";
		}
};

class B:public X,public Y
{
	public:
		B()
		{
			cout<<"\nConstructor of B Called";
		}
};
int main()
{
    B objb;
	return 0;
}