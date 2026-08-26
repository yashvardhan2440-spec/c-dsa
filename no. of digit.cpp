#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , sum =0,digit;
    cout<<"enter no.:";
    cin>>n;

    while(n>0){
        n=n/10;
        sum++;
    }

    cout<<"no. of digit:"<<sum;

    return 0;
}
