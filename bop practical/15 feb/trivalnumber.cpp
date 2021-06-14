//Write a program to print triad number
//Each number is three dit number
//All the digits in the three number should be different
//Rama9:53 AM
//Second number should be twice the furst number and third number should be thrice the first number
//Eg
//219 438 657
//267 534 801

#include<iostream>
int main(){
	int arr[232];
	int t=102;
	for(int i=0;i<240;i++){
		arr[i]=t;
		t++;
	}
	for(int i=0;i<232;i++){
		int a1[3]=arr[0];
		int a2[3]={i*2};
		int a3[3]={i*3};
		printf("%s",a1);
		int a[10];
		for(int i=0;i<2;i++){
			a[a1[i]]++;
			a[a2[i]]++;
			a[a3[i]]++;
		}
		bool flag=1;
		for(int i=0;i<10;i++){
			if(a[i]>1){
				flag=0;
				break;
			}
		}
		if(flag){
			printf("%s %s %s \n",a1,a2,a3);
		}
		else {
			continue;
		}
	}
	return 0;
}

