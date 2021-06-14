// adding 2 no without operator
#include <iostream>
using namespace std;
 
int add(int x, int y){
    return printf("%*c%*c", x, '\r', y, '\r');
}
 
int main(){
    printf("Sum = %d", add(3, 4));
    return 0;
}