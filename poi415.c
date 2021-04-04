#include "stdio.h"
int main()
{
    int s=0;
    int x=342;
    s= s+  x%10;
    x=x/10;

    s=s+  x%10;
    x=x/10;

    s=s+x%10;
    x=x/10;
    printf("%d",s);
}