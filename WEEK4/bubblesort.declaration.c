#include <stdio.h>

void bubble_sort(int arr[]); //버블 정렬 함수
void print_array(int arr[]); //정렬된 배열 출력 함수

int main(void)
{
    int temp; //숫자 크기 비교 시에 사용
    int flag; //애너그램 판별 시에 사용
    
    int first_number[5] = {9, 3, 5, 1, 7};
    int second_number[5] = {3, 7, 9, 5, 1};
    
    bubble_sort(first_number);
    bubble_sort(second_number);
    
    printf("First one: ");
    print_array(first_number);
    
    printf("Second one: ");
    print_array(second_number);
   
   
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

void bubble_sort(int arr[])
{
    int temp;
    for (int i=0; i<4; i++)
    {
        // 서로 인접한 숫자 비교하기
        for (int j=0; j<5-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void print_array(int arr[])
{
    for (int i=0; i<5; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}
