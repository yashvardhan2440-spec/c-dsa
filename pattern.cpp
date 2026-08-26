#include<bits/stdc++.h>
using namespace std;
void print(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++){
            cout<<'*';
        }
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
          cout<<endl;

    }
}
void print1(int n){
    int i,j;
        for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(j=0;j<2*n-(2*i+1);j++){
            cout<<'*';
        }
        for(j=0;j<i;j++){
            cout<<" ";
        }
          cout<<endl;

    }
}


int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    print(n);
    print1(n);
}
