#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    for (int i = 0; *(s+i) != '\0' || *(t+i) != '\0'; i++)
        { if( *(s+i) != *(t+i) )
            {
               printf("Different\n");
               return 1;
             } 
         }
     printf("Same\n");
     return 0;
}
