#include <string>

using namespace std;

string reverse(string str);

string sum(string first,string second)
{

    string result = "";
    int num1,num2;
    int buffer = 0;

    int firstLen = first.size();
    int secondLen = second.size();
    int diffLen = firstLen - secondLen; // 첫번째 입력 수와 두번째 입력수의 길이 차이
    string plusZero = "";               // 자릿수를 맞춰줄 "0"

    // diffLen이 음수가 나오면 -1을 곱해줘서 양수로 만들어준다.
    if (diffLen < 0)
        diffLen *= -1;
    // first와 second의 자리 차이만큼 "0"을 넣어준다.
    for (int i = 0; i < diffLen; i++)
        plusZero += "0";
    if (firstLen > secondLen)
        second = plusZero + second;
    else if (firstLen < secondLen)
        first = plusZero + first;

    for(int i=first.size()-1;i>=0;i--)
    {
        num1 = first[i]-'0';
        num2 = second[i] - '0';

        if((num1+num2)%10+buffer==10)
        {
            buffer = 1;
            result+="0";
        }
        else
        {
            result+= to_string((num1+num2)%10+buffer);
            buffer = (num1+num2)/10;
        }
    }
    if(buffer!=0)
        result+=to_string(buffer);

    result = reverse(result);

    return result;
}