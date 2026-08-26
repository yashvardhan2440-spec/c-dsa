#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, original, digit, count = 0, sum = 0;

    cout << "Enter no.: ";
    cin >> n;

    original = n;
    while (n > 0) {
        n = n / 10;
        count++;
    }

    n = original;

    while (n > 0) {
        digit = n % 10;
        sum = sum + pow(digit, count);
        n = n / 10;
    }

    if (sum == original) {
        cout << "Number is Armstrong";
    } else {
        cout << "Number is not Armstrong";
    }

    return 0;
}