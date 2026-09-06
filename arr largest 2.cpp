#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    
    return arr[arr.size() - 1];
}

int main() {
    vector<int> arr1 = {2, 5, 1, 3, 0};
    cout << "The Largest element in the array is: " << sortArr(arr1) << endl;
   
    return 0;
}