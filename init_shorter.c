#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int c = 0;
int spaces = 0;

int main(void)
{
    string name = get_string();
    int n = strlen(name);
   
   // prints the first letter
    printf("%c", toupper (name[0]));
 
    // iterate through 'name' looking for spaces + print th first 
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
