#include <iostream>
using namespace std;
// SWITCH

int main()
{
	int choice;
	cout<<"\n1.Tea\n2.Coffee\n3.Water\n:";
	cin>>choice;
    switch(choice)
    {
    	default:
    		cout<<"\naur kuch nahi hai bhai";
    		break;
    	case 3:
    		cout<<"\nHere is your Water";
    		break;
    	case 1:
    		cout<<"\nHere is your Tea";
    		break;
    	case 2:
    		cout<<"\nHere is your Coffee";
    		break;
    	
    
    
    }

 }