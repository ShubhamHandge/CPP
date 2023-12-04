// 2D array-- transpose matrix 

#include <iostream>

using namespace std;
int main()
{
	int m[10][10],r,c,rsize,csize;
	cout<<"Enter number of rows and columns:\n";//size
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
	cout<<"Matrix has:\n";
	for(r=0;r<rsize;r++)//i=0 to size-1
	 {
	 	for(c=0;c<csize;c++)
		 {
		   cout<<m[r][c]<<"\t";
		 }
		 cout<<"\n";
	 }
	 cout<<"tanspose matrix is:\n";
	for(r=0;r<rsize;r++)//i=0 to size-1
	 {
	 	for(c=0;c<csize;c++)
		 {
		   cout<<m[c][r]<<"\t";
		 }
		 cout<<"\n";
	 }

}