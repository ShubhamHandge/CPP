//operator overloading in compile time polymorphism
//syntax: <return type> operator<symbol>(<parameter list>)
// friend function
#include <iostream>
using namespace std;
class Complex
{
	private:
		float r,i;
public:
	void setComplex(float r,float i)
	{
		this->r=r;
		this->i=i;
	}
	void displayComplex()
	{
		cout<<"\n"<<r<<"+"<<i<<"i";
	}
	Complex operator-(Complex no2)//no1.operator-(no2)
    {
		Complex t;//to add
		t.r=r-no2.r;//no1 is calling it hence direct access r and i
		t.i=i-no2.i;//no2 is passed hence no2.i no2.r
		return(t);
    }
	friend Complex operator+(Complex no1,Complex no2);
};

Complex operator+(Complex no1,Complex no2)
{
	Complex t;//to add
	t.r=no1.r+no2.r;
	t.i=no1.i+no2.i;
	return(t);
}
int main()
{
	Complex n1,n2,n3;// n3=n1+n2
	n1.setComplex(5,3);//n1 5+3i
	n2.setComplex(3,7);//n2 3+7i

	cout<<"\nAdding\n";
	n3=n1+n2;// n3=operator+(n1,n2)
	n1.displayComplex();
	n2.displayComplex();
	n3.displayComplex();

	cout<<"Subtracting....\n";
	n3=n1-n2;//n1.operator-(n2)---n1 is calling and n2 is passed
	n1.displayComplex();
	n2.displayComplex();
	n3.displayComplex();
}
