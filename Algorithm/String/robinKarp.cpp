#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7 , m = 1e9 + 7;
vector<long long > power(N,0);


int main(){
    string s = "na";
    string t = "apnacollegenana";
    int T = t.length();
    int S = s.length();

    power[0]=1;
    for(int i =1;i< N ;i++){
        power[i]= power[i-1]*31;
    }
    long long hash_s =0 ;
    for(int i =0 ;i< S ;i++){
        hash_s = (hash_s + power[i]*(s[i]-'a'+1))%m;  
    }

    vector<long long> hash (T+1, 0);
    for(int i =0 ; i<T ;i++){
        hash[i+1] = (hash[i] + (t[i] -'a' +1)*power[i] )%m;

    }
    for(int i =0 ; i+S -1<T ;i++){
        long long curr_hash = (hash[i+S] - hash[i] +m) % m;
        if(curr_hash == (hash_s* power[i])%m ){
            cout<<"found at index "<<i<<endl ; 
        }

    }
}
