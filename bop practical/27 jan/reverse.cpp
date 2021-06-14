#include<stdio.h>
#include<string.h>
int size(char s[],int i){                // to calculate size of substring
    int count=0;                                   
    for(int j=i;s[j]!=' ' && s[j]!='\0';j++){
    count++;
    }
    return count;
}
void reverse(char s[]){
    
    for(int i=0;s[i]!='\0';i++){  
	    if (s[i]==' '){          //  case to handle space 
	    	continue;
		}        
        int count=size(s,i); 
		int j=0;                 // j , as base                              
        for(j=i;j<=(i+(count/2)-1);j++){
           // reversing the elements 
		   int temp=s[j];             
           s[j]=s[count+j-1];
           s[count+j-1]=temp; 
        }
		i=j+count-1;
		}
}
int main(){
    char s[10000];       // making string 
    gets(s);              // taking string as input
    reverse(s);                       // using function to reverse string

    puts(s);              // printing string
    return 0;
}
