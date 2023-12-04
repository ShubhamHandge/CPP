#include<iostream>
using namespace std;
//prime between 1 to 50
int main()
{
	int no,flag,i;

    for(no=1;no<=50;no++)
    {
		flag=1;//yes
		for(i=2;i<no;i++)
		{
			if(no%i==0)//if div perfectly then reset and stop
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		  cout<<no<<", ";
    }
}