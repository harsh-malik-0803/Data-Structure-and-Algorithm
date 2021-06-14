#include<stdio.h>
int main(){
	int n;
	printf("enter amount in rupees: ");
	scanf("%d", &n);
	int a[7];
	for(int i=0; i<7; i++){
		a[i] = 0;
	}
	while(n > 0){
		if(n >= 100){
			a[0] += 1;
			n -= 100;
		}
		else if(n >= 50){
			a[1] += 1;
			n -= 50;
		}
		else if(n >= 20){
			a[2] += 1;
			n -= 20;
		}
		else if(n >= 10){
			a[3] += 1;
			n -= 10;
		}
		else if(n >= 5){
			a[4] += 1;
			n -= 5;
		}
		else if(n >= 2){
			a[5] += 1;
			n -= 2;
		}
		else if(n >= 1){
			a[6] += 1;
			n -= 1;
		}
	}
	
	printf("\nThe number of notes are : ");
	if(a[0] != 0) printf("\n100 notes : %d", a[0]);
	if(a[1] != 0) printf("\n50 notes : %d", a[1]);
	if(a[2] != 0) printf("\n20 notes : %d", a[2]);
	if(a[3] != 0) printf("\n10 notes : %d", a[3]);
	if(a[4] != 0) printf("\n5 notes : %d", a[4]);
	if(a[5] != 0) printf("\n2 notes : %d", a[5]);
	if(a[6] != 0) printf("\n1 notes : %d", a[6]);
	return 0;
}
