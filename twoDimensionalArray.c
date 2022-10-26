#include<stdio.h>

void main()
{
    int array[2][2];
    for(int i=0; i<2; i++)
     for(int j=0; j<2; j++)
      scanf("%d ", &array[i][j]);
    for(int i=0; i<2; i++)
     for(int j=0; j<2; j++)
      printf("%d ", array[i][j]);
}