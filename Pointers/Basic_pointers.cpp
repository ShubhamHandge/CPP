 #include <iostream>
using namespace std;
class Animal
{
	public:
	   virtual void sound()
		{
			cout<<"\nAnimal:hmmmmmmmm";
		}
		//virtual void play()=0;
};

class Dog:public Animal
{
	public:
		void sound()
		{
			cout<<"\nDog:bow bow";
		}
	    void play()
	    {
	    	cout<<"\nDog:plays";
		}
};

int main()
{

	Animal a;//2
	Dog d;
    Animal *p;//1
	p=&a; //3 pointes to Animal
	p->sound();
	p=&d;//p pointes to Dog

	p->sound();

	return 0;
}