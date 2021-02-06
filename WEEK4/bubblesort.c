#include <stdio.h>

int main(void)
{
    int temp; //숫자 크기 비교 시에 사용
    int flag; //애너그램 판별 시에 사용
    
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
    printf("\n");
    
    printf("Second one: ");
    for (int i=0; i<5; i++)
    {
        printf("%i ", second_number[i]);
    }
    printf("\n");
    
   
    // 두 개의 숫자가 애너그램이면 "True" 출력하기
    flag = 0;
    for (int i=0; i<5; i++)
    {
        if (first_number[i] == second_number[i])
        {
            flag += 1;
        }
        else
        {
            break;
        }
    }
    
    if (flag == 5)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}
