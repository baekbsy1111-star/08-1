#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, char *argv[])
{
int i;
int a[SIZE] = {1, 2, 3, 4, 5};
int b[SIZE] = {1, 2, 3, 4, 5};
int flag_same =1;

for (i=0; i<SIZE; i++) 
{
    if (a[i]!=b[i])
    {
    printf("%i-th element is different.\n", i);
    flag_same =0;
    }
}


if (flag_same)
    printf("두 배열은 같습니다.\n");
else
    printf("두 배열은 다릅니다.\n");

       
  system("PAUSE");	
  return 0;
}
