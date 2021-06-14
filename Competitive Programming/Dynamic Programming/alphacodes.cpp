#include<iostream>
#include<string>
using namespace std;

int alpha_codes(int *input ,int size){
    int *output=new int[size+1];
    output[0]=1;
    output[1]=1;

    for(int i=2;i<=size;i++){
        output[i]=output[i-1];
        
        if(input[i-2]*10+input[i-1]<=26){
            output[i]+=output[i-2];
        }
    }       
    int ans=output[size];
    delete [] output;
    return ans;
}

int main(){
    int give[]={1,1,2,3};
    cout<<"NUmber of alpha codes are : "<<alpha_codes(give,4)<<endl;
}