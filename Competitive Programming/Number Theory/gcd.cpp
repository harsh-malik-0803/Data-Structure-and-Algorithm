// gcd using Eucleid's lemma
#include<algorithm>
#include<iostream>
using namespace std;

int gcd(int a ,int b){
    // Base case 
    if(b==0){
        return a;
    }
    // other case 
    if(a<b){
        return gcd(b,a);
    }
    // code
    return gcd(b,a%b);
}
int main(){
    int a=16;
    int b=10;
    cout<<gcd(a,b);
}