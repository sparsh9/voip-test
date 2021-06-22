#include <iostream>
#include <string>
using namespace std;


int main()
{
    string line;
    const char* WhiteSpaces = " \t\v\r\n";

    getline(cin, line);

    size_t start = line.find_first_not_of(WhiteSpaces);
    size_t end = line.find_last_not_of(WhiteSpaces);

    string answer = start == end ? string() : line.substr(start, end - start + 1);
    cout<< answer <<endl;
}