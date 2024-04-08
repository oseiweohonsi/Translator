#include <iostream>
#include <fstream>
#include <vector> // for the vector
#include <string> // for the string
#include "Morse.h"
using namespace std;
int main()
{

    Morse send_message;
    int choice;
    cout << "----------MORSE CODE TRANSLATOR----------\n";
    cout << "1. Translate message to morse code\n";
    cout << "2. Translate morse code\n";
    cout << "3. Decode File\n";
    cin >> choice;
    string message;
    switch (choice)
    {
    case 1:
        cout << "Enter secret message: ";
        cin.ignore();
        getline(cin, message);
        send_message.convertToMorse(message);
        break;
    case 2: 
        cout << "Decode morse code\n";
        break;
    case 3: 
        cout << "Decoding file...\n";
        break;
    case 4: 
        cout << "Exiting program...\n";
    default:
        break;
    }

    return 0;
}
