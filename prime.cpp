#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    bool prime = true;

    cout << "Enter no.: ";
    cin >> n;

    if (n <= 1) {
        prime = false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime) {
        cout << "Number is prime";
    } else {
        cout << "Number is not prime";
    }

    return 0;
}