//pallendrom of word using i & j

#include <iostream>
using namespace std;
int main()
{
	string full_name,i,j;
    int flag=1; 
	cout<<"Enter your word: ";
    cin>>full_name;
	for(int i=0,j=full_name.length()-1;i<=full_name.length()&& j>=0 ;i++, j--)
	{
	    if(full_name[i]!=full_name[j])
	       flag=0;
	       break;
	}
	if(flag==1)
	cout<<"\n it is pallendrom";
	
  		else{
	    
	     cout<<"\n no it is not";
	    }
}