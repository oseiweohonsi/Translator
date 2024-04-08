#include <iostream>
#include <fstream>
#include <vector> // for the vector 
#include <string> // for the string 
using namespace std;
int main()
{
    vector<char> characters;
    vector<string> morse_code;
    // open the file
    ifstream file;
    file.open("code.txt");
    // temporarily store file contents
    char temp_char;
    string temp_code;
    if (file)
    {
        while (file >> temp_char >> temp_code)
        {
            characters.push_back(temp_char);
            morse_code.push_back(temp_code);
        }
    }
    // print the characters
    file.close();
    return 0;
}
