#include<stdio.h>

void main()
{
    int twodArray[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int *arrayPointer = &twodArray[0][0];
    for(int i=0; i<3; i++)
     for(int j=0; j<3; j++)
      printf("%d ", *(*(*arrayPointer+i)+j) );
}