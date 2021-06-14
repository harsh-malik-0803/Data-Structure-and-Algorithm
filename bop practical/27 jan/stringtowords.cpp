#include<stdio.h>
int main(){
	int n;
	printf("enter the number of elements you want: ");
	scanf("%d",&n);
	int a[n];
	printf("enter the value of elements: ");
	// code for taking array as input
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	
	int value;
	printf("enter the value you want to add :\n ");
    scanf("%d",&value);
    
    int index;
    printf("enter the index where you want to add number : ");
    scanf("%d",&index);
     
    // code for reversing elements in array
    for(int i=n;i>index-1;i--){
    	a[i]=a[i-1];
    	
	}
	a[index]=value;
	
	// printing array 
	printf("final array is : \n");
	for(int i=0;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
