#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string str;
    cin>>str;
    for (int i=0; i<str.size(); i++) {
        if(isupper(char(str[i]))) cout << char(tolower(str[i]));
        else if(islower(char(str[i]))) cout << char(toupper(str[i]));
    }
}