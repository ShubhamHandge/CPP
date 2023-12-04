#include <iostream>
using namespace std;
//1+2+3.......n
int main()
{
   int n,sum=0,i;
   cout<<"Enter n:";
   cin>>n;
   for(i=1;i<=n;i++)
       {
	    sum+=i;//sum=sum+i
       }
    cout<<"\nSum is:"<<sum;

   }