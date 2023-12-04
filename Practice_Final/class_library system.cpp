/*
Library Management System:

Problem Definition:

Design a Book class with the following features:

Attributes: title, author, ISBN, issuedStatus.
Constructor: Initializes a book with title, author, and ISBN.
The issuedStatus should be set to false initially.
Destructor: Display a message saying "[Book Title] is being removed from the system".
Method: issueBook(): Changes the issuedStatus to true.
Method: returnBook(): Changes the issuedStatus to false.
Demonstrate the usage of the Book class by creating multiple book objects,
issuing some books, and returning them.
*/


#include <iostream>
using namespace std;
class Book
{
  private:
  	string title;
  	string author;
  	int ISBN;
  	bool issued_status;    //boolean
  	
  	
  public:
	  void Setbook(string t,string a,int ISBN)
	  {
	   title=t;
	   author=a;
	   ISBN=++isbn_generator;
	   
	   cout<<"\NTitle of book: "<<title<<" Name of author:"<<author;
	  }
	  
	  	void displayBook()
	{
		cout<<"\nbook: "<<
		
	}	
};
	  
	  
	  
	  
	  