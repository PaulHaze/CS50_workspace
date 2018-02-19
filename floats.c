#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("x is ");
    float x = get_float();
    
    printf("y is ");
    float y = get_float();
    
    printf("%f + %f = %f\n", x, y, x + y);
    printf("%f minus %f = %f\n", x, y, x - y); 
    printf("%f times %f = %f\n", x, y, x * y);
    printf("%f divided by %f = %f\n", x, y, x / y);
//    printf("remainder of %f divided by %f is %f\n", x, y, x % y);
}