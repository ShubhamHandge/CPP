//Append to a file
#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    // Open the file in append mode
    ofstream outputFile("shubham", ios::app);

    if (outputFile.is_open()) {
        // Append text to the file
        outputFile << "\nJai ho" << endl;
        outputFile.close();
        cout << "Text has been appended to the file." << endl;
    } else {
        cout << "Unable to open file for appending" << endl;
    }

    return 0;
}
