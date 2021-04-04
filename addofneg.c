// Addition of two non negetive number//
#include "stdio.h"
int main()
{
    int a,b,c;
    while (1)
    {
        printf("enter first number \n");
        scanf("%d",&a);
        if (a<0)
        {
                printf ("in valid input\n");
                continue;
        }
        while (1)
        {
            printf ("Enter second number\n");
            scanf("%d",&b);
            if (b>0)
            {
                printf("invalid input \n");
                continue;
            }
            else 
                break;
        }   
        c=a+b;

        printf("%d",c);            
    
        
    }
}