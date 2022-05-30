#include<iostream>

using namespace std;

// Defined a constant for fast i/o.
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

// Function to find the maximum element.
int maxElement(int* arr, int n) {

    int max = arr[0];

    for(int i = 0; i < n; ++i) {
        if(arr[i] >= max) {
            max = arr[i];
        }
    }
    
    return max;
}

// Function to find the minimum element.
int minElement(int* arr, int n) {

    int min = arr[0];

    for(int i = 0; i < n; ++i) {
        if(arr[i] <= min) {
            min = arr[i];
        }
    }
    
    return min;
}

// Driver Code
int main()
{
    fastio;

    // Inputs
    int n, max, min;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    // Calling the function
    max = maxElement(arr, n);
    min = minElement(arr, n);

    // Printing the result
    cout<<max<<" "<<min;

    return 0;
}