#include <string>

using namespace std;

string reverse(string str);

string sub(string first, string second)
{
    string result = "";
    int num1, num2;
    int buffer = 0;
    bool minus = false;

    if(first.size()<second.size()||(first.size()<=second.size()&&first<second))  // 큰수가 먼저 오도록 만들기
    {
        string temp = first;
        first = second;
        second = temp;
        minus = true;   // if문이 돌았다는 건 second가 큰수라는 의미이므로 minus를 true로 변경
    }
    for(int i=first.size()-1,j = second.size() - 1;i>=0;i--,j--)
    {
        num1 = first[i] - '0';
        if(j>=0)
            num2 = second[j] - '0';
        else
            num2 = 0;
        
        if(num1-buffer-num2<0)
        {
            result += to_string(10+(num1-buffer-num2));
            buffer = 1;
        }
        else
        {
            result += to_string(num1-buffer-num2);
            buffer = 0;
        }
    }
    while(result.size()>1&&result.back()=='0')
        result.pop_back();

    if(minus==true)
        result+="-";
    
    result = reverse(result);

    return result;
}