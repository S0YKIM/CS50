#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[6] = {4,8,9,17,25,62};
    
    for (int i=0; i<6; i++)
    {
        if (numbers[i] == 50)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
