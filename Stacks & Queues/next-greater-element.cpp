#include<bits/stdc++.h>

using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n){
    stack<long long> grt;
    vector<long long> nge;
    
    grt.push(-1);
    
    for(int i = n - 1; i >= 0; --i) {
        while(grt.top() <= arr[i] and grt.size() != 1) {
            grt.pop();
        }
        nge.push_back(grt.top());
        grt.push(arr[i]);
    }
    
    reverse(nge.begin(), nge.end());
    
    return nge;
}