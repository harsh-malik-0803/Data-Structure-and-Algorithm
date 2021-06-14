// given a height - we have to find number of balanced BST(|leftheight-rightheight|<=1) from this.
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int total_Bst(int h){
    if(h==1 || h==0){
        return 1;
    }
    
    int x= total_Bst(h-1);
    int y=total_Bst(h-2);
    int m=pow(10,9)+7;

    long res1= (long)(x*x);
    long res2= (long)(x*y*2);

    int ans1= (int)(res1%m);
    int ans2= (int)(res2%m);

    int ans=(ans1+ans2)%m;
    return ans;
}
int main(){
    int h;
    cin>>h;
    
    cout<<total_Bst(h)<<endl;
}