#include <iostream>
#include <string>
#include "editor.h"

int main()
{
  int blockCount = 0;
  string userInputLine;
  while (getline(cin, userInputLine))
  {
    string output = "";
    if (removeLeadingSpaces(userInputLine)[0] == '}')
    {
      blockCount--;
    }
    for (int i = 0; i < blockCount; ++i)
    {
      output += '\t';
    }
    output += removeLeadingSpaces(userInputLine);
    cout << output << endl;
    blockCount += countChar(userInputLine, '{');
    //Since we removed a blockCount already
    //We want to add it back because it was just for that line
    if (removeLeadingSpaces(userInputLine)[0] == '}')
    {
      blockCount++;
    }
    blockCount -= countChar(userInputLine, '}');
  }
}
