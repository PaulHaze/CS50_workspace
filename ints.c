#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("x is ");
    int x = get_int();
    
    printf("y is ");
    int y = get_int();
    
    printf("%i + %i = %i\n", x, y, x + y);
    printf("%i minus %i = %i\n", x, y, x - y); 
    printf("%i times %i = %i\n", x, y, x * y);
    printf("%i divided by %i = %i\n", x, y, x / y);
    printf("remainder of %i divided by %i is %i\n", x, y, x % y);
}