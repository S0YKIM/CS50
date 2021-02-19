#include <stdio.h>

void sort(int n, int *p);

int main() 
{ 
    int arr[] = {0, 25, 10, 17, 6, 12, 9}; 
    int n = sizeof(arr)/sizeof(*arr); 
    sort(n, arr); 
    
    for (int i=0; i<n; i++)
    {
        printf("%i ", *(arr+i));
    }
    printf("\n");
    
    return 0; 
}

void sort(int n, int *p)
{
    int i, j, temp;
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (*(p+j) > *(p+j+1))
            {
                temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
}
