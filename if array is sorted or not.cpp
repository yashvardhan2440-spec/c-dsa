#include<bits/stdc++.h>
using namespace std;

bool issorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
            
        }
    }
    return true;
}

int main(){
    int arr[]={1,2,3,7,5},n=5;
    bool ans=issorted(arr,n);
    
    if(ans)cout<<"true"<<endl;
    else cout<<"false"<<endl;
    
    return 0;
    
}