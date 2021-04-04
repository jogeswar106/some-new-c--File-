#include "stdio.h"
int main()
{
    long int x=90000;
    unsigned char *p=&x;
    int i;
    for (i=1;i=sizeof (x);i++)
    {
        printf ("%d ",*p);
        p++;
    }
}
