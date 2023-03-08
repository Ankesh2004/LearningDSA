#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

int main() {

    string s;
    cin>>s;
    int i=0;
    stack <char>S;
    while(s[i]!='\0'){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            S.push(s[i]);
          
        }
         if(s[i]==')'||s[i]=='}'||s[i]==']'){
            S.pop();
            
        }

        i++;
    }
    S.empty()? cout<<"Balanced\n":cout<<"Unbalanced\n";

/*Algorithm:

Create an empty stack.
Traverse through the string expression from left to right.
If the current character is an opening parenthesis, push it onto the stack.
If the current character is a closing parenthesis, pop an element from the stack and check if it matches the current closing parenthesis. If it matches, continue traversing the string. If it doesn't match, return 'false'.
After the traversal, check if the stack is empty. If it's not empty, return 'false'. Otherwise, return 'true'.
*/
    return 0;
}
