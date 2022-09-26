#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> stk;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            stk.push(s[i]);
        else
        {
            if (stk.empty())
                return false;
            if (s[i] == ')' && stk.top() != '(')
                return false;
            else if (s[i] == '}' && stk.top() != '{')
                return false;
            else if (s[i] == ']' && stk.top() != '[')
                return false;
            stk.pop();
        }
    }
    return stk.empty();
}

int main()
{

    // Question 2

    string str;

    cin >> str;

    bool flag = isValid(str);

    if(flag)cout<<"Valid"<<endl;
    else cout<<"Invalid"<<endl;
}