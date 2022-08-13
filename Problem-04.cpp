#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count[n+1]={0};
    if(a[0]>0){
        count[1] = a[0];
    }
    for(int i=2;i<=n+1;i++){
        if(a[i-1]>0){
            count[i] = count[i-1] + a[i-1];
        }
        else{
            count[i] = count[i-1];
        }
        
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        cout<<count[r]-count[l-1]<<endl;
    }
    return 0;
}