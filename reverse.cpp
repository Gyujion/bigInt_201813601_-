#include <string>

using namespace std;

string reverse(string str)
{
    for(int i=0;i<str.size()/2;i++)
    {
        char temp = str[i];
        str[i] = str[str.size()-i-1];
        str[str.size()-i-1]=temp;
    }
    return str;
}