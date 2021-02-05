#include <stdio.h>

const int number_of_scores = 9;
const int scores[number_of_scores] = {95, 90, 85, 80, 75, 70, 65, 60, 0};

const int number_of_grades = 9;
const char *grades[number_of_grades] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};

void get_grade(int k);

int main(void)
{
    printf("[학점 프로그램]\n");
    printf("종료를 원하면 '-1'를 입력\n");
    printf("[학점 테이블]\n");
    printf("점수: 95  90  85  80  75  70  65  60  0\n");
    printf("학점: A+  A   B+  B   C+  C   D+  D   F\n");
    
    
        while (1)
        {
            int n; 
            printf("성적을 입력하세요 (0 ~ 100) ");
            scanf("%d", &n);
        
        if (n == -1) 
        {
        printf("학점 프로그램을 종료합니다.\n");
        break;
        }
        
        else if (n < 0 || n > 100) // 유효성 검사: 0점 이상 100점 이하의 성적 입력
        {
            printf("성적을 올바르게 입력하세요 (0 ~ 100)\n");
            continue;
        }
        
        else 
        {
            get_grade(n); 
        }
    }
}
    
    
    void get_grade (int k) // 입력받은 성적을 바탕으로 학점을 구하는 함수 정의하기
    {
        int i=0;
        while (i < number_of_scores)
        {
            if (k < scores[i] & k >= scores[i+1])
            {
                printf("학점은 %s 입니다.\n", grades[i+1]);
                break;
            }
            else if (k >= 95)
            {
                printf("학점은 A+ 입니다.\n");
                break;
            }
            else
            {
                i++;
            }
        }
    }
