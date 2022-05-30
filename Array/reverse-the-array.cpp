#include<iostream>

using namespace std;

// Defined a constant for fast i/o.
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

// Function to reverse an array.
// It swaps the variables but only runs till half of the array length.
void reverseArray(int* arr, int n) {

    int temp;

    for(int i = 0; i < n/2; ++i) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

// Driver Code
int main()
{
    fastio;

    // Inputs
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    // Calling the function
    reverseArray(arr, n);

    // Printing the array
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }

    return 0;
}