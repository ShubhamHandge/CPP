#include <iostream>
using namespace std;

class Student
{

    private:
		string name,gender;
		int rollno;
	public:
		static int number;
		void registers(string n,string g)
		{
			name=n;
			gender=g;
			rollno=++number; // assigning a value from static to instance member
			cout<<"\nCongrats you are registred and your roll no is:"<<rollno;

		}
		int get_rollno()
		{
			return rollno;
		}
		void displayStudent()
		{
			cout<<"\nRollno:"<<rollno<<"\tName:"<<name<<"\tGender:"<<gender;
		}
 static void total_count_is()
 {
 	//cout<<"\ncalled by Roll no:"<<rollno;//can not access as can only access static data
 	cout<<"\nTotal students till now are:"<<number-202300;
	 }
};
int Student::number=202300;
//static declaration outside class is must as global access

int main()
{
	int ch,index=0,r,flag;
	Student s[100];
	string n,g;
	do
	{
		cout<<"\n1.Register\n2.Search\n3.Print all\n0.Exit\n:";
		cin>>ch;
		switch(ch)
		{
			case 1:
					cout<<"\nEnter name and gender:\n";
					cin>>n>>g;
					s[index].registers(n,g);
					index++;
					break;
			case 2:
					cout<<"\nEnter rollno\n";
					cin>>r;
					flag=0;
					for(int i=0;i<index;i++)
					 {
					 	if(r==s[i].get_rollno())
					 		{
					 		 cout<<"Found:";
							 s[i].displayStudent();
							 flag=1;//found
							 break;
						    }
			 		 }
					 if(flag==0)
					  cout<<"Not found";
					break;
			case 0:
					cout<<"\nExit...";
					break;
		 	case 3:
		 		  for(int i=0;i<index;i++)
		 		  	s[i].displayStudent();
		 		  break;
			default:
					cout<<"Wrong options selected";
					break;
		}
	}while(ch!=0);
	return 0;
}