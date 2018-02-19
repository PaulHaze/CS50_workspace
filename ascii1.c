#include <cs50.h>
#include <stdio.h>


int main(void)
{
    for (char c = 'A' ; c <= 'z'; c++)
    {
        printf("%c is %i\n", c, (int) c);
    }
}
