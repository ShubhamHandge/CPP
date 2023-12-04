#include <iostream>
using namespace std;
int main()
{
	int m[10][10],r,c,rsize,csize;
	int max,min;
	cout<<"Enter number of rows and columns:\n"; //size
	cin>>rsize>>csize;
	//read
	for(r=0;r<rsize;r++)//i=0 to size-1
	 {
	 	for(c=0;c<csize;c++)
		 {
		   cout<<"\nEnter element at "<<r<<","<<c<<" : ";
		   cin>>m[r][c];
		 }
	 }
	 min=m[0][0];
	 max=m[0][0];
	cout<<"Matrix has:\n";
	for(r=0;r<rsize;r++)//i=0 to size-1
	 {
	 	for(c=0;c<csize;c++)
		 {
		   if(m[r][c]<min)
		   	min=m[r][c];
		   if(m[r][c]>max)
		    max=m[r][c];
		 }

	 }
	cout<<"\nMax is:"<<max<<"\t Min is:"<<min;
}