#include<stdio.h>
#include<string.h>

int size(char s[],int i){                // to calculate size of substring
    int count=0;                                   
    for(int j=i;s[j]!=' ' && s[j]!='\0';j++){
    count++;
    }
    
    return count;
}

void reverse_full(char s[],int length){
	for(int i=0;i<=length/2-1;i++){       // to reverse full string
		int temp=s[i];
		s[i]=s[length-i-1];
		s[length-i-1]=temp;
	}
}

void reverse(char s[]){
    for(int i=0;s[i]!='\0';i++){  
	    if (s[i]==' '){          //  case to handle space 
	    	i++;
		}        
        int count=size(s,i); 
		int j;                 // j , as base  
		int k=1;                                
       for(j=i;j<=(i+(count/2)-1);j++){
           // reversing the elements 
		   int temp=s[j];             
           s[j]=s[count+j-k];
           s[count+j-k]=temp;
		   k=k+2;     
       }
	   i=i+count-1;
    }
}

int main(){
    char s[10000];       // making string 
    gets(s);              // taking string as input
       
	                   // using function to reverse string
    int length=strlen(s);
    reverse_full(s,length);
	
    puts(s); 
	reverse(s);             // printing string
	puts(s);
    return 0;
}
