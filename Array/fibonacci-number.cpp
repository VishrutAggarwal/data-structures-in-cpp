#include<bits/stdc++.h>

using namespace std;

int fib(int n) {
    vector<int> arr = {0,1};
    for(int i = 2; i <= n; ++i)
        arr.push_back(arr[i-1] + arr[i-2]);
    return arr[n];
}