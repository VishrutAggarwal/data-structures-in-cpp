#include<iostream>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

// Sorting the array using bubble sort.
void bubbleSort(int* arr, int n) {

    int temp;

    for(int i = 0; i < n; ++i) {
        for(int j = 1; j < n - i; ++j) {
            if(arr[j] < arr[j-1]) {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

// Finding the kth maximum element from the array.
int kthMaxElement(int* arr, int n, int k) {

    return arr[n-k];
}

// Finding the kth minimum element from the array.
int kthMinElement(int* arr, int n, int k) {

    return arr[k-1];
}

// Driver Code
int main()
{
    fastio;

    // Inputs
    int n, k, max, min;
    cin>>n>>k;

    int arr[n];
    for(int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    // Calling the functions
    bubbleSort(arr, n);
    max = kthMaxElement(arr, n, k);
    min = kthMinElement(arr, n, k);

    // Printing the result
    cout<<max<<" "<<min;

    return 0;
}