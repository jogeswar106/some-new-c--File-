#include "stdio.h"
int revrse (int);
int main()
{
    int n,x;
    printf("Enter any no.");
    scanf("%d ",&n);

    x=revrse (n);
    printf("%d",x);
}
int reverse (int n)
{
    static int s=0;
    if (n>0)
    {
        s=s*10+n%10;
        n=n/10;
        reverse(n);
    }
    return s;
}
