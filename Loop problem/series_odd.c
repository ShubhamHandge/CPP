#include <iostream>
using namespace std;
//1+2+3.......n  (odd numbers)
int main()
{
   int n,sum=0,i;
   cout<<"Enter n:";
   cin>>n;
   for(i=1;i<=n;i=i+2)
       {
	    sum+=i;//sum=sum+i 
       }
    cout<<"\nSum of odd number is:"<<sum;

   }