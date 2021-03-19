#include <iostream>
#include "editor.h"
using namespace std;

string removeLeadingSpaces(string line)
{
    //Intialize an output variable
    string output = "";
    for (int i = 0; i < line.length(); ++i)
    {
        //Check if the character is a space
        if (!isspace(line[i]))
        {
            output += line.substr(i, line.length());
            return output;
        }
    }
    return output;
}

int countChar(string line, char c)
{
    int count = 0;
    for (int i = 0; i < line.length(); ++i)
    {
        if (line[i] == c)
        {
            count++;
        }
    }
    return count;
}
