#include <stdio.h>
#include <stdlib.h>


int main(void)
{
int i;
int grade[5];
grade[0] = 10;
grade[1] = 20;
grade[2] = 30;
grade[3] = 40;
grade[4] = 50;
printf("5명의 점수는 다음과 같습니다:\n");

    for (i = 0; i < 5; i++)
        printf("%d번째 학생 점수: %d\n", i + 1, grade[i]);
  system("PAUSE");	
  return 0;
}
