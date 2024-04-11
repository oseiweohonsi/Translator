#include <iostream>
#include <fstream>
#include <vector> // for the vector
#include <string> // for the string
#include "Morse.h"
using namespace std;
string getMorseCode(vector<string>);
int main()
{

    Morse send_message;
    int choice;
    cout << "----------MORSE CODE TRANSLATOR----------\n";
    cout << "1. Translate message to morse code\n";
    cin >> choice;
    string message; // hold the secret message
    vector<string> morseCode; // hold the morse code message
    switch (choice)
    {
    case 1:
        cout << "Encode Message: ";
        cin.ignore();
        getline(cin, message);
        send_message.convertToMorse(message);
        break;
    case 2:
        cout << "Decode Message: ";
        cin.ignore();
        break;
    case 3: 
        cout << "Exiting program...\n";
    default:
        break;
    }

    return 0;
}
