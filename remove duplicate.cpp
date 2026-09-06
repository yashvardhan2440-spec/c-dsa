#include<bits/stdc++.h>
using namespace std;

// Function
void removeDuplicates(int arr[], int n) {
    unordered_set<int> s;

    for(int i = 0; i < n; i++) {
        if(s.find(arr[i]) == s.end()) {
            cout << arr[i] << " ";
            s.insert(arr[i]);
        }
    }
}

int main() {
    
    int arr[]={1,2,2,3,3},n=5;
    cout << "Array after removing duplicates: ";
    removeDuplicates(arr, n);

    return 0;
}