#include <stdio.h>

int main()
{
    int a, *x, b;
    
    a=5;
    x=&a;
    b=*x;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of x is %p\n\n", x);
    
    printf("The value of x is %d\n", *x);
    printf("The value of x is %p\n", &a);
    printf("The value of x is %p\n", &b);
}



