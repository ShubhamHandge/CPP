#include <iostream>
using namespace std;
// fibonna series
int main()
{
   int n,i,f0=0,f1=1,fn;
   
   cout<<"Enter n:";
   cin>>n;
   for(i=0;i<n;i++)
       {
           if(i<=1)
           {
           cout<<i<<",";
           }else
           
           {
               fn=f0+f1;
               f0=f1;f1=fn;
           }
       }
    cout<<"\n fibonnacci series is:"<<fn;

   }