// Program to convert a decimal number to roman numerals
// hint : 1.  Divide it in order 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 to find largest
//            base value. Here 250 is divided by 100. The corresponding roman symbol for 100 is C.
// 2. Subtract 250 with 100 (largest base value in previous step) to get new number i.e. 150.
// 3.  Again divide 150 in the order mentioned earlier. It is divided by 100, so corresponding roman symbol is C.
// 4. Subtract 150 with 100 to get new number i.e. 50.
// 5.  Divide 50 again in the order mentioned earlier. 50 is divided by 50, so corresponding 
//      roman symbol is L.
// 6.  Subtract 50 with 50. The new number obtained is 0 so we stop here.
// 7.   The final roman numeral is CCL.
#include <stdio.h> 
void roman(int num ){
    while(num != 0)
    {if (num >= 1000)       // 1000 - m
        {
           printf("M");
           num -= 1000;
        }
        else if (num >= 900)   // 900 -  cm
        {
           printf("CM");
           num -= 900;
        }else if (num >= 500)   // 500 - d
        {           
           printf("D");
           num -= 500;
        }else if (num >= 400)   // 400 -  cd
        {
           printf("CD");
           num -= 400;
        }else if (num >= 100)   // 100 - c
        {
           printf("C");
           num -= 100;                       
        }else if (num >= 90)    // 90 - xc
        {
           printf("XC");
           num -= 90;                                              
        }else if (num >= 50)    // 50 - l
        {
           printf("L");
           num -= 50;                                                                     
        }else if (num >= 40)    // 40 - xl
        {
           printf("XL");           
           num -= 40;
        }else if (num >= 10)    // 10 - x
        {
           printf("X");
           num -= 10;           
        }else if (num >= 9)     // 9 - ix
        {
           printf("IX");
           num -= 9;                         
        }else if (num >= 5)     // 5 - v
        {
           printf("V");
           num -= 5;                                     
        }else if (num >= 4)     // 4 - iv
        {
           printf("IV");
           num -= 4;                                                            
        }else if (num >= 1)     // 1 - i
        {
           printf("I");
           num -= 1;                                                                                   
        }}
}
int main() 
{   
    int num, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Roman form is : ");        
    roman(num);

    return 0;
}
