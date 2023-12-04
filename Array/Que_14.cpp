// 14. Find total marks & percentage


#include <iostream>

using namespace std;

int main()
{
    int s1,s2,s3,total;
    float per;
    cout<<"Enter three sub marks: ";
    cin>>s1>>s2>>s3;
     total=s1+s2+s3;
   cout<<"\n total marks is: "<<total;

  per=total/3;
  cout<<"\n per is: "<<per<<"%";

}
