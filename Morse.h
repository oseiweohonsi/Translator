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
    void getCharacters(vector<char> &, vector<string> &); // get the characters from the file
    void convertToString(vector<string>);
};
#endif