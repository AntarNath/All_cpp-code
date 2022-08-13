#include<bits/stdc++.h>
using namespace std;

int isprime(int n){
    if(n<2) return 0;
    if(n==2) return 1;
    if(n%2==0)  return 0;
    for(int i=3; i<=sqrt(n); i++){
        if(n%i==0)  return 0;
    }

    return 1;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        int a = isprime(i);
        if(a)   cout<<i<<" ";
    }

    return 0;
}