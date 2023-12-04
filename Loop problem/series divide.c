#include <iostream>
using namespace std;
//1/2 + 3/4 +4/5...
int main()
{
   int n,i;
   float sum=0.0f;
   cout<<"Enter n:";
   cin>>n;
   for(i=1;i<=2*n;i=i+2)
       {
	    sum=sum+(float)i/(i+1);//sum=sum+i 
       }
    cout<<"\nSum of number is:"<<sum;

   }