#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int hash[100] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        hash[arr[i]]++;
    }

    int maxFreq = 0;
    int element = 0;

    for (int i = 0; i < 100; i++) {
        if (hash[i] > maxFreq) {
            maxFreq = hash[i];
            element = i;
        }
    }

    cout << "Highest occurring element = " << element << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}