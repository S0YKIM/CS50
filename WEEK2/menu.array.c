#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string day = get_string("요일을 입력하세요.\n");
    if (strcmp(day,"월요일")==0)
    {
        printf("월요일: 청국장\n");
    }
    else if (strcmp(day, "화요일")==0)
    {
        printf("화요일: 비빔밥\n");
    }
    else if (strcmp(day, "수요일")==0)
    {
        printf("수요일: 된장찌개\n");
    }
    else if (strcmp(day, "목요일")==0)
    {
        printf("목요일: 칼국수\n");
    }
    else if (strcmp(day, "금요일")==0)
    {
        printf("금요일: 냉면\n");
    }
    else if (strcmp(day, "토요일")==0)
    {
        printf("토요일: 소불고기\n");
    }
    else if (strcmp(day, "일요일")==0)
    {
        printf("일요일: 오삼불고기\n");
    }
    else 
    {
        printf("정확한 요일을 입력해주세요.\n");
    }
}
