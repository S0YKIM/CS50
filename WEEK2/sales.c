#include <cs50.h>
#include <stdio.h>

// N: 기존 재고량
const int N = 5; 

int main(void)
{
    int i = get_int("주문건수: ");
    printf("주문건수: %i건\n", i);
    printf("기존 재고량: %i개\n", N);
    printf("남은 재고량: %d개\n", N-i);
    printf("매출액(부가세포함): %.f원\n", i*10000*1.1);
}
