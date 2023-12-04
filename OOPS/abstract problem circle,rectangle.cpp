#include <iostream>
using namespace std;
class Shape //abstract class
{
  public:
  	virtual void printArea()=0;    //pure virtual function
};

class Circle:public Shape
{
	private:
    float r;

  public:
  	void setR(float r)
  	{
  		this->r=r;
	}

  	void printArea()
  	{
  		cout<<"\nArea of Circle is:"<<(3.14*r*r);
	  }
};
class Rectangle:public Shape
{
	private:
    float l,b;

  public:
  	void setlb(float l,float b)
  	{
  		this->l=l;
  		this->b=b;
	}

  	void printArea()
  	{
  		cout<<"\nArea of rectangle is:"<<(l*b);
	  }
};

int main()
{
  Circle objc;
  objc.setR(12.2f);
  objc.printArea();
  
  Rectangle objr;
  objr.setlb(12.0f,10.0f);
  objr.printArea();
  
}
