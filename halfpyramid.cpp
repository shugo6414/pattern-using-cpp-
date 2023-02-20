#include<bits/stdc++.h>
using namespace std;

void halfpyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=i){
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        halfpyramid(n);
    }
}