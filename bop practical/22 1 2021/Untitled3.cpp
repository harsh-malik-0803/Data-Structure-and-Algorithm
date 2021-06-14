//  binary to decimal
#include<stdio.h>
#include<math.h>
int convert (int n,int a){
    int k;
	if(a==1){
    	k=2;
	}
	else{k=8;
	}
	int decimal=0,i=0;
    while(n>0){
        int x=n%10;
        decimal=decimal+x*pow(k,i);
        n=n/10;
        i++;
    }
    return decimal;
}
int main(){
	printf("Press your choice : \n");
	printf("1. Convert Binary to Decimal. \n");
	printf("2. Convert octel to Decimal. \n");
    int a;
	scanf("%d",&a);
	int n;
    printf("enter the number in your selected format : \n");
    scanf("%d",&n);
    
    int t=convert(n,a);
    printf("decimal form of the number is : %d\n",t);
    return 0;
}
