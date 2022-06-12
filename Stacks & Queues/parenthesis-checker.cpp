#include<bits/stdc++.h>

using namespace std;

bool ispar(string x)
{
    stack<char> exp;
    exp.push(x[0]);
    for(long long int i = 1; i < x.length(); ++i) {
        if(exp.empty()){
            exp.push(x[i]);
        }
        
        else if(x[i] == ')' && exp.top() == '(') {
            exp.pop();
        }
        
        else if(x[i] == ']' && exp.top() == '[') {
            exp.pop();
        }
        
        else if(x[i] == '}' && exp.top() == '{') {
            exp.pop();
        }
        
        else {
            exp.push(x[i]);
        }
    }
    return exp.empty();
}