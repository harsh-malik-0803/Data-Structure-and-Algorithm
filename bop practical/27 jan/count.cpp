#include<stdio.h>
#include<string.h>
void count(char s[]){
	int i=0;
   for(i=0;s[i]!='\0';i++){
   	printf("%c\n",s[i]);
   } printf("length of string is : %d",i);
}
int main()
{
   char s[45];
   printf("enter the string : ");
   gets(s);
   count(s);
  
}
