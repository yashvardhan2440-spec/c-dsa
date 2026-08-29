#include <bits/stdc++.h>
using namespace std;

void print(string s, int n) {
    if (n == 0)
        return;

    cout << s << endl;
    print(s, n - 1);
}

int main() {
    string s;
    int n;

    cout << "Enter string: ";
    getline(cin, s);

    cout << "Enter n: ";
    cin >> n;

    print(s, n);

    return 0;
}