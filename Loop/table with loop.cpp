#include <iostream>
using namespace std;
//read a number and print its math table
/*n=2
2 X 1 =2
2 X 2 =4
.
.
.
2 X 10 =20
*/

int main()
{
   int no,i;
   cout<<"Enter n:";
   cin>>no;
   for(i=1;i<=10;i++)
     cout<<"\n"<<no<<" X "<<i<<" = "<<(no*i);
}