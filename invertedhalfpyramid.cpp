#include<bits/stdc++.h>
using namespace std;

void invertedhalfpyramid(int n){
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
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
        invertedhalfpyramid(n);
    }
}