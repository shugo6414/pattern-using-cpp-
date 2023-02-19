#include<bits/stdc++.h>
using namespace std;

void hollow_rectangle(int n,int m){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==n || i==1 ||  j==1 || j==m){
                cout<<"*"<<" ";
            }
            else cout<<" "<<" ";
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
        hollow_rectangle(n,m);
    }
}