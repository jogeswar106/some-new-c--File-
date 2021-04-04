#include "stdio.h"
void main()
{
    void *p;
    printf("Enter number ");
    scanf("%d",(int *)&p);
    printf("%d",(int)p);
}
