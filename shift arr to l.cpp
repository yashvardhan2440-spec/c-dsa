#include<bits/stdc++.h>
using namespace std;


void solve(int arr[], int n) {
    int temp[n];  

    // Shift the elements to the left by one position
    for (int i = 1; i < n; i++) {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];  // The first element moves to the last position

    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";  
    }
    cout << endl;
}

int main() {
    int n = 5;  
    int arr[] = {1, 2, 3, 4, 5};      
    solve(arr, n);

    return 0;
}