#include "Morse.h"
#include <cctype>
void Morse::convertToMorse(string message)
{
    getCharacters(characters, morse_code);
    // change message to char
    vector<char> newArray;
    for (int i = 0; i < message.length(); i++)
    {
        newArray.push_back(message[i]);
    }

    for (char val : newArray)
        cout << val;
    // create new vector to store decoded message
    vector<string> decodedMessage;
    for (int i = 0; i < newArray.size(); i++)
    {
        for (int j = 0; j < characters.size(); j++)
        {
            if (tolower(newArray[i]) == tolower(characters[j]))
            {
                decodedMessage.push_back(morse_code[j]);
            }
        }
    }
    cout << "Morse: ";
    for (string val: decodedMessage)
    {
        cout << val << " ";
    }
    cout << endl;
}
void Morse:: getCharacters(vector<char> &letters, vector<string> &code)
{
    // open the file
    ifstream file;
    file.open("code.txt");
    // temporarily store file contents
    char temp_letter;
    string temp_code;
    if (file)
    {
        while (file >> temp_letter >> temp_code)
        {
            letters.push_back(temp_letter);
            code.push_back(temp_code);
        }
    }
    // print the characters
    file.close();
}
