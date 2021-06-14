#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
typedef long long ll;
class Triplet{
    public:
    long long gcd;
    long long x;
    long long y;
};

Triplet get_extended_eucleid(long long a ,long long b){
    
    //base case
    if(b==0){
        
        Triplet myans;
        myans.gcd=a;
        myans.x=1;
        myans.y=0;

        return myans;
    }

    // Extended Eucleid says
    Triplet smallans=get_extended_eucleid(b,a%b);
    Triplet myans;
    myans.gcd=smallans.gcd;
    myans.x=smallans.y;
    myans.y=(smallans.x- ((smallans.y)* (a/b)));

    return myans;
}

// function to find multiplicative inverse 
// it is a number when we multiply some number by it(5) and then take mod the mod comes b/w (0,5)
//  (5*7)%17 =1 ;    Hence 7 is multiplicative modulo inverse ...
long long modInverse(long long A ,long long  M){
    long long x =get_extended_eucleid(A,M).x;
    return (x%M +M )%M;
}
int main(){
    // Triplet ans=get_extended_eucleid(16,10);
    // cout<<ans.gcd<<" ";
    // cout<<ans.x<<" ";
    // cout<<ans.y<<" ";
    //modInverse(5,17);

    int t;
    cin>>t;
    while(t--){
        // solution of ax+by=d

        ll a,b,d;
        cin>>a>>b>>d;
        
        if(d==0){
            cout<<1<<endl;
            continue;
        }
        ll g = __gcd(a,b);
        if(d%g){
            cout<<0<<endl;
            continue;
        }
        a/=g;
        b/=g;
        d/=g;
        
        ll y1= ((d%a)* modInverse(b,a) )%a;
        ll firstvalue= d/b;

        if(d<y1*b){
            cout<<0<<endl;
            continue;
        }
        ll n= (firstvalue -y1)/a;
        ll ans=n+1;
        cout<<ans<<endl;
    }
}