#include<stdio.h>
int reverse (int n){
    int sum=0;
    while(n>0){
        int x=n%10;
        sum=sum*10+x;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    
    int t=reverse(n);
    printf("reverse of the number is : %d",t);
    return 0;
}
