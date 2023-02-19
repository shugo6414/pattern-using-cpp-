#include<bits/stdc++.h>
using namespace std;

void solid_rectangle(int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    solid_rectangle(n,m);
    }
    return 0;
}