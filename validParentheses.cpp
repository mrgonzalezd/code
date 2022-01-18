#include <iostream>
#include <string>
#include <stack>
using namespace std;

 bool isValid(string s) {
    stack<char> parenStack;
    char lid;
    //check for open parens
    for(int i=0; i < s.length(); i++){
        if(s[i]== '(' || s[i]== '{' || s[i]== '['){
            parenStack.push(s[i]);
            continue;
        }
        //stack shouldn't be empty if there are remaining open parens to check
        if(parenStack.empty()){
            return false;
        }
        // this is where open parens pop off
        //check for closed parens
        switch(s[i]){
            case ')':
                lid = parenStack.top();
                parenStack.pop();
                if(lid == '{' || lid == '[')
                    return false;
                break;
            case '}':
                lid = parenStack.top();
                parenStack.pop();
                if(lid == '(' || lid == '[')
                    return false;
                break;
            case ']':
                lid = parenStack.top();
                parenStack.pop();
                if(lid == '{' || lid == '(')
                    return false;
                break;
        }
    }
    return (parenStack.empty());
}

int main(){
    string s = "()";
    if (isValid(s))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}