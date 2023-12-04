#include <iostream>
using namespace std;
//start to end 
//start 3 end=0 --> 3,2,1,0
//start 3 end=6 --> 3,4,5,6

int main()
{
	int i,start,end;
	cout<<"Enter start:";
	cin>>start;
	cout<<"Enter end:";
	cin>>end;
	if(start<end)//counter 
	{
		for(i=start;i<=end;i++)	
			cout<<i<<", ";
	}
	else//countdown
	{
		for(i=start;i>=end;i--)	
			cout<<i<<", ";
	}

}