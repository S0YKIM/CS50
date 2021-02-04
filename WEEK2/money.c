#include <cs50.h>
#include <stdio.h>

float interest = 1.012;

int main(void)
{
    int goal = get_int("예금액: ");
    printf("만기시 받을 금액: %g 원\n", goal * interest);
}
