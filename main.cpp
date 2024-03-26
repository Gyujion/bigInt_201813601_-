#include <iostream>
#include <string>

using namespace std;

string sum(string first,string second);
string sub(string first,string second);

int main(void)
{
    string first = "";
    string second = "";
    string result = "";

    cout << "First number >> ";
    cin >> first;
    cout << "Second number >> ";
    cin >> second;
    
    result = sum(first,second);
    cout<<"Sum >> "<<result;
    cout<<endl;

    result = sub(first,second);
    cout<<"Sub >> "<<result;
    cout<<endl;

    return 0;
}