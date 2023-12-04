#include <iostream>
using namespace std;
class Human
{ private:
	string name;
  public:
  	Human(string n)
  	{
  		cout<<"\nHi i m constructor from human";
  		name=n;
  		cout<<"\nName set to: "<<name<<" by constructor:Human";
	}
};

class Education:public Human
{
	private:
		string degree;

  public:
  	Education(string n,string d):Human(n)
  	{
  		cout<<"\nHi i m constructor from Education";
  		degree=d;
  		cout<<"\nDegree set to: "<<degree<<" by constructor:Education";
	}
};

class Job:public Education
{
	private:
		string job;
	public:
	   //contructor(parameters):constructor_super_class(parameters)
	   Job(string n,string d,string j):Education(n,d)
	   {
	   	cout<<"\nHi i m constructor from Job";
  		job=j;
  		cout<<"\nJob set to: "<<job<<" by constructor:Job";
	   }

};
int main()
{
	Job j("Amar","Phd","Trainer");
}