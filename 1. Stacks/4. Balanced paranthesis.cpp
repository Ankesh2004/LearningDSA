#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int i = 0;
    stack<char> S;
    while (s[i] != '\0')
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            S.push(s[i]);
        }
        if ((s[i] == ')' && S.top() == '(') || (s[i] == '}' && S.top() == '{') || (s[i] == ']' && S.top() == '['))
        {

            S.pop();
        }
        i++;
    }
    S.empty() ? cout << "Balanced\n" : cout << "Unbalanced\n";

    return 0;
}
