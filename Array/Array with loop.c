#include <iostream>
using namespace std;
//take n elements from user,cal avaerage,print elements greater
//than average
int main()
{
	int a[100],i,size,sum=0;
	float avg;
	cout<<"Enter n:";//size
	cin>>size;
	//read
	for(i=0;i<size;i++)//i=0 to size-1
	 {
	 	cout<<"\nEnter element at "<<i<<":";
	 	cin>>a[i];
	 }
	 for(i=0;i<size;i++)
	 {
	  sum=sum+a[i];//sum of array
	 }
	 avg=(float)sum/size;
	 cout<<"\nAverage:"<<avg;

	 for(i=0;i<size;i++)
	  {
	 	if(a[i]>=avg)
	 		cout<<a[i];
	  }

}