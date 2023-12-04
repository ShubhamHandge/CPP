/*
Traditional Indian Musical Instrument Shop
Objective: Model a shop that sells various types of traditional Indian musical instruments. 
Each instrument has its distinct way of producing sound, and their prices vary based on their characteristics.

Concepts Involved: Abstraction (using abstract classes and methods) and Method Overriding.

Problem Definition:

Abstract Class: Instrument

Attributes:
name: Name of the musical instrument (e.g., Sitar, Tabla).
price: Price of the instrument in Indian Rupees.
Methods:
playSound(): An abstract method. The specific sound production is to be defined in derived classes.
displayDetails(): Displays the name and price of the instrument.
setPrice(int newPrice): Sets the price of the instrument.
getPrice(): Retrieves the price of the instrument.

Derived Class: Sitar (from Instrument)
Attributes:
numberOfStrings: Typical sitars have between 18 to 21 strings.
Methods:
playSound(): Override the base method to print "Strumming the [numberOfStrings]-stringed sitar!"
displayDetails(): Display the name, price, and number of strings of the sitar.
Derived Class: Tabla (from Instrument)

Attributes:
tablaSet: A pair of drums – one smaller (dayan) and one larger (bayan).
Methods:
playSound(): Override the base method to print "Beating the rhythmic tabla set!"
displayDetails(): Display the name, price, and mention of the tabla set.
Main Program:

Instantiate a Sitar with the name "Mohan's Sitar", priced at ₹30,000, with 19 strings.
Instantiate a Tabla with the name "Giridhar's Tabla Set", priced at ₹12,000.
Display the details of both instruments using the displayDetails() method.
Invoke the playSound() method for both instruments to demonstrate their unique sounds.

output Expected:
Instrument Details:
Name: Mohan's Sitar
Price: ₹30,000
Strings: 19
Strumming the 19-stringed sitar!

Instrument Details:
Name: Giridhar's Tabla Set
Price: ₹12,000
Set: Dayan and Bayan pair
Beating the rhythmic tabla set!
*/



 #include <iostream>
using namespace std;
class Instrument
{
	private;
	  string name;
	  float price;
	  
	public:
	   void playsound()
	   {
	   	
	   	
	   }
	   
	   void displaydetails()
	   {
	   	
	   	
	   	
	   	
	   }
	   
	   void getprice(int newprice)
	   {
	   	
	   	
	   }
	
};
class sitar:public Instrument
{
	private;
	   int NumOfStrings;
	  
	public:
		void playSound()
		{
			
			
		}
		
		displayDetails()
		{
			
			
		}
	
	
};









