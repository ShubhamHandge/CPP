//operator overloading in compile time polymorphism
//syntax: <return type> operator<symbol>(<parameter list>)
// friend function
#include <iostream>
using namespace std;
class Time
{
	private:
		int h,m,s;
	public:
		void setTime(int h,int m,int s)
		{
			this->h=h;
			this->m=m;
			this->s=s;
		}
		void displayTime()
		{
			cout<<"\nTime-->"<<h<<" : "<<m<<" : "<<s;
		}
		friend Time operator+(Time t1,Time t2);
};
Time operator+(Time t1,Time t2)
{
	Time x;
	x.h=t1.h+t2.h;
	x.m=t1.m+t2.m;
	x.s=t1.s+t2.s;
	x.m=x.m+x.s/60;//if >60 +1 else 0
	x.s=x.s%60;
	x.h=x.h+x.m/60;//if >60 +1 else 0
	x.m=x.m%60;
	return(x);
}
int main()
{
	Time t1,t2,t3;
	t1.setTime(5,30,35);
	t2.setTime(3,35,50);
	t3=t1+t2;
	t1.displayTime();
	t2.displayTime();
	t3.displayTime();
}