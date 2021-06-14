#include<iostream>
#include<vector>
using namespace std;
#define MAX 500001
#define MOD 1000000001
typedef long long ll;    // used in changing name of data types
#define pb push_back
vector<int>* sieve(){
    bool is_prime[MAX];
    vector<int> * primes= new vector<int>();
    for(int i=2;i<=MAX;i++){
       is_prime[i]=true;
    } 

    for(int i=2;i*i<=MAX;i++){
        if(is_prime[i]){
           for(int j=i*i;i<=MAX;j+=i){
                if(is_prime[j]){
                    is_prime[j]=false;
                }
            } 
        }
        
    }

    primes->push_back(2); 
    for(int i=3;i<=MAX;i+=2){
        if(is_prime[i]){
            primes->push_back(i);
        }
    }
    return primes;
}

ll divisors(int n, vector<int >* & primes){
    ll result =1;

    for(int i=0;primes->at(i)<=n;i++){
        int k=primes->at(i);
        ll count =0;
        while(n/k !=0){
            count= (count+ (n/k))%MOD;
            k=k*primes->at(i);
        }

        result = (result* (count+1)%MOD)% MOD;
    }
    return result;
}
int main(){
    vector<int >* primes = sieve();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<divisors(n,primes)<<endl;
    }
}