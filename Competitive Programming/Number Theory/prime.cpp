#include<iostream>
using namespace std;
void sieve(int n){
    bool isprime [n+1];
    for(int i=0;i<=n;i++){
        isprime[i]=true;
    }
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i*i<=n;i++){
        for(int j=i*i;j<=n;j+=i){
            if(isprime[j]){
                isprime[j]=false;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(isprime[i]){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    sieve(n);
}