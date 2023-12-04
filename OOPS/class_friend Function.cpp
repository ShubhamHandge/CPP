 #include <iostream>
using namespace std;
//use this to print answer in cm from both

class Feet;       //forward decleration
class Inches
{

	private:
		int inches;
	public:
		void setInches(int i)
		{
			inches=i;
		}
		friend void display_for_all(Feet f,Inches i);
};

class Feet
{
	private:
		int feet;
	public:
		void setFeet(int f)
		{
			feet=f;
		}
	    friend void display_for_all(Feet f,Inches i);
};
void display_for_all(Feet f,Inches i)
{
	cout<<"From friend\nFeet is: "<<f.feet<<"\nInches: "<<i.inches;
	cout<<"\nTotal in cm :"<<(f.feet*12*2.54)+(i.inches*2.54);             // 1 feet = 12 inches*2.54cm
}
int main()
{
	Feet f;Inches i;
	f.setFeet(11);
	i.setInches(7);
    display_for_all(f,i);

	return 0;
}