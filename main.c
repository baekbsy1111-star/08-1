#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
int i;
int grade[SIZE];
int score[SIZE];
    for (i = 0; i < 5; i++)
    {
    grade[i] = rand()%100;
}
 for (i = 0; i < 5; i++)
 {
     score[i]=grade[i];
}

     for (i = 0; i < 5; i++)
     printf("score[%d]=%d\n", i, score[i]); 
       
  system("PAUSE");	
  return 0;
}
