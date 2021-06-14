// decimal to binary
#include<stdio.h>
#include<math.h>
int convert (int n){
    int binary=0,i=0;
    while(n>0){
        int x=n%2;
        binary=binary+x*pow(10,i);
        n=n/2;
        i++;
    }
    return binary;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    
    int t=convert(n);
    printf("binary form of the number is : %d",t);
    return 0;
}
