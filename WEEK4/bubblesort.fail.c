#include <stdio.h>

int main(void)
{
    int temp;
    
    int first_number[5] = {9, 3, 5, 1, 7};
    int second_number[5] = {3, 7, 9, 5, 1};
    
    //첫번째 숫자 버블 정렬하기
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<5-i-1; j++) // 서로 인접한 숫자 비교하기
        {
            if (first_number[j] > first_number[j+1])
            {
                temp = first_number[j];
                first_number[j] = first_number[j+1];
                first_number[j+1] = temp;
            }
        }
    }
    
    //두번째 숫자 버블 정렬하기
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<5-i-1; j++) // 서로 인접한 숫자 비교하기
        {
            if (second_number[j] > second_number[j+1])
            {
                temp = second_number[j];
                second_number[j] = second_number[j+1];
                second_number[j+1] = temp;
            }
        }
    }
    
    printf("First one: ");
    for (int i=0; i<5; i++)
    {
        printf("%i ", first_number[i]);
        
    }
    
    printf("\nSecond one: ");
    for (int i=0; i<5; i++)
    {
        printf("%i ", second_number[i]);
    }
    
    // 두 개의 숫자가 애너그램이면 "True" 출력하기
    for (int i=0; i<5; i++)
    {
        if (first_number[i] != second_number[i])
        {
            printf("False\n");
            break;
            
        }
        else
        {
            continue;
        }
        printf("True\n");
    }
}
