#include <iostream>
using namespace std;

int main()
{
   int choice,ct,cc,cw;
  cc=ct=cw=0;
   do
   {
   	cout<<"\n1.Tea\n2.Coffee\n3.Water\n0.Exit\n:";//menu
   	cin>>choice;//input
   	switch(choice)
   	   {
   		case 1:
   			cout<<"\nTea served...";
   			ct++;
   			break;
   		case 2:
   			cout<<"\nCoffee served...";
   			cc++;
   			break;
   		case 3:
   			cout<<"\nWater served...";
   			cw++;
   			break;
   		case 0:
   			cout<<"\nThanks hope had good time....";
   			break;
   		default:
   			cout<<"\nSorry Check Option Selected....";
   			break;
	   }//switch
    }while(choice!=0);
    
    cout<<"\ntea"<<ct<<"\ncoffee"<<cc<<"\nwater"<<cw;
    cout<<"total amount is: "<<ct*10+cc*20+cw*15;
}