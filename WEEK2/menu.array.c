#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string menu[7];
    menu[0] = "월요일: 청국장";
    menu[1] = "화요일: 비빔밥";
    menu[2] = "수요일: 된장찌개";
    menu[3] = "목요일: 칼국수";
    menu[4] = "금요일: 냉면";
    menu[5] = "토요일: 소불고기";
    menu[6] = "일요일: 오삼불고기";
    
    printf("월요일: 0\n");
    printf("화요일: 1\n");
    printf("수요일: 2\n");
    printf("목요일: 3\n");
    printf("금요일: 4\n");
    printf("토요일: 5\n");
    printf("일요일: 6\n");
    
    int day = get_int("번호를 입력하세요.\n");
    
    printf("%s\n", menu[day]);
}
