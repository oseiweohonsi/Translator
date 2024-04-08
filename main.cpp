#include <iostream>
#include <fstream>
#include <vector> // for the vector 
#include <string> // for the string 
#include "Morse.h"
using namespace std;
string getMessage();
int main()
{
    
    // menu
    Morse send_message;
    int choice
    cout << "----------MORSE CODE TRANSLATOR----------\n";
    cout << "1. Translate message to morse code\n";
    cout << "2. Translate morse code\n";
    cout << "3. Decode File\n";
    cin >> choice
    switch (choice)
    {
    case 1:
        send_message.get
        break;

    default:
        break;
    }

    return 0;
}

string getMessage()
{
    string message;
    cout << "Enter secret message: ";
    getline(cin, message);
    return message;
}