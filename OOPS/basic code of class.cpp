 #include<iostream>
using namespace std;

class Human
{
  private:
  	string name,gender;

  public:
  void setHuman(string n ,string g)
  {
     name=n;
	 gender=g;
  }
  void displayHuman()
  {
  	cout<<"\nhi i am a "<<gender<<" called "<<name;
  }
};
int main()
{
	Human h;
	h.setHuman("amar","male");
	h.displayHuman();
	Human h2;
	h2.setHuman("amarita","female");
	h2.displayHuman();

}