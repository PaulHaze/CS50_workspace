#include <cs50.h>
#include <stdio.h>

void print_name(string name);

int main(void)
{
    string firstName = get_string();
    print_name(firstName);
}

void print_name(string s)
{
    printf("hello %s\n", s);
}