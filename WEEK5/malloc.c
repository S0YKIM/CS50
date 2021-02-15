#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");
    
    char *t = malloc(strlen(s) + 1);
    
    int n = strlen(s);
    for (int i = 0; i < n + 1; i++)
    {
        t[i] = s[i];
    }
    
    t[0] = toupper(t[0]);
    
    printf("%s\n", s);
    printf("%s\n", t);
}
