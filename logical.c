#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("do you want to remove this item? :");
    char c = get_char();
    if (c =='y')
    {
    printf("yes\n");
    }
    
    else if (c == 'n')
    {
        printf("no\n");
    }
    else
    {
        printf("error\n");
    }
}