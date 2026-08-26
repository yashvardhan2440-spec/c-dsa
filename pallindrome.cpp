#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,rev=0,digit;
    cout<<"enter no.:";
    cin>>n;
    int org = n;

    while(n>0){;
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    if(rev==org)
    {
        cout<<"no is pallindrome";
    }else
    {
        cout<<"no. is not pallindrome";
    }


    return 0;
}
