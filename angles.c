#include <stdio.h>
int main(){
    int a, b, c;
    // We need to find third angle when given to angles Sume ( a + b + c) angle is 180 degree
    printf("Please provide the value for angle a: ");
    scanf(" %d", &a);
    printf("Please provide the value for angle b: ");
    scanf(" %d", &b);
     a + b; 
    if((a + b > 180) || (a + b < 0))
    {
        printf(" The value you entered is to high  or to low");
        printf("Please provide the value for angle a: ");
        scanf(" %d", &a);
        printf("Please provide the value for angle b: ");
        scanf(" %d", &b);
        c = 180 - (a + b);
        printf("The size of the third angle is %d", c);
    }
    
        return 0;
    }

