#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid_triangle(int a, int b, int c);

int main(void)
{
    int a = get_int();
    int b = get_int();
    int c = get_int();
    
    int e = valid_triangle(a, b, c);
    if (e != 0)
    {
        printf("triangle is valid\n");
        
    }
    else
    {
        printf("triangle invalid\n");
    }
    
    printf("\n");
}

bool valid_triangle(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    
    {
        return false;
    }
    
    if ((a + b <= c) || (b + c <= a) || (c + a <= b))
    {
        return false;
    }
    
    return true;
    
}