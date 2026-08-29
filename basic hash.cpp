#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4};

    int hash[10] = {0};

    for (int i = 0; i < 7; i++) {
        hash[arr[i]]++;
    }

    cout << hash[1] << endl;
    cout << hash[2] << endl;
    cout << hash[3] << endl;
    cout << hash[4] << endl;

    return 0;
}