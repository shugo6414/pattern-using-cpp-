#include<bits/stdc++.h>
using namespace std;

void invertedhalfhollowpyramid(int n){
    int k=n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=n;j++){
            if(j<=i){
                if(j==1 || i==n || j==i){
                    cout<<"*"<<" ";
                }
                else cout<<" "<<" ";
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
        invertedhalfhollowpyramid(n);
    }
}