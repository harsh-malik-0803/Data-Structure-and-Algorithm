// given    a^b  . c= 10^9 +7 
// Problem - How to store it if it crossing integer range .
// for iterative solution you should use binary digits for powers and then solve
#include<iostream>
using namespace std;
int modRecursive(int a ,int b,int c){

    if(b==0){
        return 1;
    }
    if(b%2==0)
    return modRecursive((a*a)%c,b/2,c);

    else 
    return ((a%c)*modRecursive((a*a)%c,b/2,c))%c ;
}
int main(){
    cout<<modRecursive(2,3,5);  
}