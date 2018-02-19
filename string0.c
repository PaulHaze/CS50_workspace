#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // ask user for an input
    string s = get_string();
    
    //make sure input is valid
    if (s != NULL)
    
    //iterate through the length of the string
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c\n", s[i]);
    }
}