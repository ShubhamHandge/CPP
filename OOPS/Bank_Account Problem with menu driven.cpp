#include <iostream>
using namespace std;
//Bank System
class Account
{
  private:
  	string holder_name;
  	int acc_no;
  	float balance;
  	static int acc_generator;
  public:
	  void openaccount(string n,float a)
	  {
	   holder_name=n;
	   balance=a;
	   acc_no=++acc_generator;
	   cout<<"\nCongrats "<<holder_name<<" your account number:"<<acc_no;
	  }

	  void displayAccount()
	  {
	    cout<<"\nAccount number:"<<acc_no<<"\t Name:"<<holder_name<<"\t Balance"<<balance;
	  }
	  void deposit(float a)
	  {
	  	if(a<0)
	  	 cout<<"\nCan not have -ve number:";
	  	else
		  {
		  	balance+=a;//update
		  	cout<<"\nupdated";
		  	displayAccount();
		  }
	  }

	  int get_account_no()
	  {
	    return acc_no;
	  }

};
int Account::acc_generator=202300;
int main()
{
	Account obja[10];
	int ch,index=0,acn,flag;
	float a;
	string n;
	do
	{
		cout<<"\n1.Register_Account\n2.Deposit\n3.Withdraw\n4.Check Balance\n0.Exit\n:";
		cin>>ch;
		switch(ch)
		{
			case 1:
					cout<<"\nEnter name and amount:\n";
					cin>>n>>a;
					while(a<3000)
					{
						cout<<"please enter amount 3000+:";
						cin>>a;
					}
					obja[index].openaccount(n,a);
					index++;
					obja[index-1].displayAccount();
					break;
    		case 2:
					cout<<"\nEnter Account number:\n";
					cin>>acn;
					flag=0;
					for(int i=0;i<index;i++)
					 {
					 	if(acn==obja[i].get_account_no())
					 		{
					 		 cout<<"Found:";
					 		 cout<<"\nEnter amount:";
					 		 cin>>a;
							 obja[i].deposit(a);
							 flag=1;//found
							 break;
						    }
			 		 }
					 if(flag==0)
					  cout<<"\nAccount Not found";
					break;
			case 0:
					cout<<"\nExit...";
					break;
	/*	 	case 3:
		 		  for(int i=0;i<index;i++)
		 		  	s[i].displayStudent();
		 		  break;*/
			default:
					cout<<"Wrong options selected";
					break;
		}
	}while(ch!=0);
	return 0;

}