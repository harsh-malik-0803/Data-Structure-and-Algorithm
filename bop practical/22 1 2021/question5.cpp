
#include<stdio.h>
#include<math.h>
int convert (int n,int a){
    int k;
    if(a==1){
        k=2;
    }
    else if(a==2){
        k=8;
    }
    else {
        k=16;
    }
	int binary=0,i=0;
    while(n>0){
        int x=n%k;
        binary=binary+x*pow(10,i);
        n=n/k;
        i++;
    }
    return binary;
}
int main(){int n;
    printf("enter the number in decimal format : \n");
    scanf("%d",&n);
	printf("Press your choice : \n");
	printf("1. Convert  Decimal to Binary . \n");
	printf("2. Convert Decimal to octel. \n");
    printf("3. convert decimal to hexadecimal. \n");
    int a;
	scanf("%d",&a);
	
    
    int t=convert(n,a);
    switch (a) {
        case 1:
        printf("binary ");
        break;
        case 2:
        printf("octel ");
        break;
        case 3:
        printf("hexadecimal ");
        break;
    }
    printf(" form of the number is : %d\n",t);
    return 0;
}
