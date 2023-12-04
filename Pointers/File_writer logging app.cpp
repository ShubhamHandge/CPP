/*Flow:
1.read a file-->ask for name--->read and show
2.write to a file--->ask for name---->take lines till EXIT_NOW and write in file
                                                      ----->in already not there create
                                                      >>>>entries are log based*/
      
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main() 
{
	string file_name;
	int ch;
	cout<<"\n1.read file\n2.write file\n0.Exit\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
			
			cout<<"Enter File name:";
	        cin>>file_name;
            // Create and open a text file
            ifstream myfile(file_name+".txt");           // ifstream -> for reading file  // finput is object for file
            string line;
            // read line by line
           while(getline(myfile,line))
            {
            cout<<"\nLine is: "<<line;
            }
            // Close the file
             myfile.close();
             break;
             
			}
             
        case 2:
        	{
			
        	 cout<<"Your file name: ";
             cin>>file_name;
             
             ofstream myfile(file_name+".txt", ios::app);
             // current date and time on the current system
             time_t now = time(0);
             // convert now to string form
             string date_time = ctime(&now);
             myfile<<"\nLogged on: "<<date_time<<"\n";
  			cout<<"\n(Type EXIT_NOW to exit log)\n";
  			string data;
            do
            {
            	cout<<"\nYour line:  >";
             	getline(cin,data);
             	if(data=="EXIT_NOW")
            	{
   	              myfile<<"------------------------------------------\n";       //myfile i.e. object of file--> works as cout
                  myfile.close();
   	                break;
                }
	             else
	            {
	                myfile<<data<<"\n";
                }
            }while(true);
            break;
        }
        case 0:
	    	cout<<"\nExit";
			break;
			
		default:
		    cout<<"Wrong choice";
			break; 
            		
	}
	
}                                                