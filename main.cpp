// Morse code translator
// Note: The letters of a word are separated by a space of duration equal to three dits,
// and words are separated by a space equal to seven dits
#include <iostream>
#include <fstream> // read from files
#include <vector> // vector headers
using namespace std;
int main()
{
 
  string line; // created to store each string
  char letter; // stores latin alphabets
  vector<char> alphabets; // store all the alphabets
  vector<string> morse_code_chars; // store all the morse code

  ifstream file("code.txt");
  while(file)
    {
      file >> letter >> line;
      alphabets.push_back(letter);
      morse_code_chars.push_back(line);
    }
  for (char val: alphabets)
    {
      cout << val << endl;
    }
  for (string val: morse_code_chars)
    {
      cout << val << endl;
    }
  file.close()
  
  
  return 0;
}
