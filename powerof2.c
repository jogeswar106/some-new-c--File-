// way to display the power of 2 from 1 to 100.
#include "stdio.h"
void  2 (int,int);
int main()
{
     2 (1,100);

}
void  2 (int i,int j)
{
    while (i<=j)
    {
        if ((i&i-1)==0)
            printf("%d",i);
        
        i++;
    }
}