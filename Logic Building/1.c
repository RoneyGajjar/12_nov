/*- Write a program in C to make a pyramid pattern with numbers increased by 1.
   1 
  2 3 
 4 5 6 
7 8 9 10 
*/

#include <stdio.h>
int main() 
{
    int rows,temp=1,i,j; 
    printf("\nEnter the value of rows = ");
    scanf("%d",&rows);
    
	for(i=1;i<=rows;i++) 
	{
        for (j=1;j<=rows-i;j++) 
		{
            printf(" ");
        }
        for (j=1;j<=i;j++) 
		{
            printf("%d ",temp);
            temp++;
        }
        printf("\n");
    }
    return 0;
}
