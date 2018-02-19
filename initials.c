#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>



int main(void)
{
    string name = get_string();
    if string != NULL
    {
    int n = strlen(name);
   
    // first letter will always be the first initial
    printf("%c", toupper (name[0]));
 
    // iterate through 'name' looking for spaces + print the first 
    // letter after a space
    for (int j = 0; j < n; j++)
    {
        if (name[j] == ' ')
        {
            printf("%c", toupper (name[j+1]));
        }
    } 
    
        printf("\n"); 
    }
}
