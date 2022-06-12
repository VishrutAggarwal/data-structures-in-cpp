#include<bits/stdc++.h>

using namespace std;

char* reverse(char *S, int len)
{
    stack<char> str;
    
    for(int i = 0; i < len; ++i) {
        str.push(S[i]);
    }
    
    for(int i = 0; i < len; ++i) {
        S[i] = str.top();
        str.pop();
    }
    
    return S;
}