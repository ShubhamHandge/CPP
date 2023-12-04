#include <iostream>
using namespace std;
class circle
{
    private:
  	float radius;                     // instance member

  public:
  void setradius(float r)           // r is local member
  {
     radius=r;                       // this refer to local instance
                                      // c.setradius                 
  }
  void displayarea()
  {
  	cout<<"\narea of circle:  "<<3.14*radius*radius;
  }
};
int main()
{
circle c;
float r;
//cout<<"enter radius of circle: ";
//cin>>r;
c.setradius(5);
c.displayarea();


}