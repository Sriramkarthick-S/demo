#include<stdio.h>
enum days{sunday=1,monday,tuesday,wednesday,thursday,friday,saturday};
void main()
{
    enum days d;
    d=thursday;
    printf("%d",d);
}
