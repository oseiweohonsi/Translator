// Morse code translator
// Note: The letters of a word are separated by a space of duration equal to three dits,
#ifndef MORSE_H
#define MORSE_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class Morse
{
private:
    string message;
    vector<char> characters;   // store the characters
    vector<string> morse_code; // store the morse code
public:
    void convertToMorse(string);
    void getCharacters(vector<char>, vector<string>); // get the characters from the file
};

void Morse::getCharacters(vector<char> letters, vector<string> code)
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
#endif