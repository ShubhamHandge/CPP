/*create class Bank:has name of holder,amount given when object creation,program should produce account number internally.
code should be menu driven
1.create account:
   takes the name,amount------>if amount>3000 then only -->congrats your account created:2023XX
2.withdraw:--->ask for account number----search if found--->take amount--->if balance-given amount> 3000 then only do transaction
3.deposit:--->ask for account number----search if found--->take amount--->if amount>0 then amount+balance
4.Check balance---->ask for account number---account number,name,balance*/

#include<iostream>
using namespace std;

class Bank
{ 
    private:
    	string name_holder;
    	float amount,balance;
    	int accNum;
    	
    public:
    	static int generated_Number;
    void setBank(string n,float a)
    {
    	name_holder=n;
    	amount=a;
    	balance=a;
    	accNum=generated_Number++;
	}
	
	void withdraw(int acn)
	{ 
		float amt;
		if(acn==accNum)
		{
			cout<<"Enter amount for withdraw: ";
			cin>>amt;
		 if(amount-amt>3000)
		 { 
		    balance=amount-amt;
		 	cout<<"Transaction successfull..!"<<"Remaining balance is: "<<balance;
		 }
		 else
		 {
		 	cout<<"Transaction unsuccessfull.";
		 }
		}
		else
		{
			cout<<"Account not found";
		}
		
	}
	
		void deposit(int acn)
	{ 
		float d_amt;
		if(acn==accNum)
		{
			cout<<"Enter amount for deposit: ";
			cin>>d_amt;
		 if(d_amt>0)
		 { 
		    balance=balance+d_amt;
		 	cout<<"Transaction successfull..!"<<"Remaining balance is: "<<balance;
		 }
		 else
		 {
		 	cout<<"Transaction unsuccessfull.";
		 }
		}
		else
		{
			cout<<"Account not found";
		}
		
	}
	
	void check_balance(int acn)
	{ 
	
		if(acn==accNum)
		{
			 cout<<"\nAccountholder Name:"<<name_holder<<"\nAccount Number: "<<accNum<<" "<<"your A/c balance is: "<<balance;
		}
		else
		{
			cout<<"Account not found";
		}
		
	}
		
	
	void displayBank()
	{
		if(amount>3000)
	    {
			cout<<"\nCongratulation your account is being created..!";
	        cout<<"\nAccountholder Name:"<<name_holder<<"\nAccount Number: "<<accNum<<" "<<"Amount is: "<<amount;
      	}
      	else
      	{
      		cout<<"\n"<<name_holder<<"\nsorry we unable to create your account";
		  }
		
	}	
};
int Bank::generated_Number=2300; 

int main()
{
   int n;
   string a;
   float f;
   cout<<"Enter name: ";
   getline(cin,a);
   cout<<"Enter amount: ";
   cin>>f;
	
    Bank b;
    b.setBank(a,f);
    b.displayBank();
    cout<<"\nEnter account number: ";
    cin>>n;
    b.withdraw(n);
    b.deposit(n);
    b.check_balance(n);
}







