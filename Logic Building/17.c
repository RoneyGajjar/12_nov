/*- Write a program in C to make a pyramid pattern with numbers increased by 1.

   1 
  2 3 
 4 5 6 
7 8 9 10 
*/
#include<stdio.h>
int main()
{
    int i,j,row;
    for (i=1;i<=row;i++)
    {
        for(j=i;j<=i;j++)
        {
            printf("%d ",i);
        }
        
        printf("\n");
    }
    return 0;
}