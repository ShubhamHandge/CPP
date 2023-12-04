#include <iostream>
using namespace std;
//sort
int main()
{
	int a[100],i,size,temp,j;
	cout<<"Enter n:";//size
	cin>>size;
	//read
	for(i=0;i<size;i++)//i=0 to size-1
	 {
	 	cout<<"\nEnter element at "<<i<<":";
	 	cin>>a[i];
	 }


	 for(i=0;i<size-1;i++)//passes
	  {
	 	for(j=0;j<size-1;j++)//compare
	 	{
		  if(a[j]>a[j+1])//swap if needed
	 		{
	 			temp=a[j];
	 			a[j]=a[j+1];
	 			a[j+1]=temp;
	        }
		}
	  }

	 cout<<"\nSorted array \n";
	 for(i=0;i<size;i++)//i=0 to size-1
      {
   	   	cout<<a[i]<<"--";
      }
}