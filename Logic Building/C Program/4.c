#include<stdio.h>
int main()
{
    int n1;
    printf("\nEnter the value in n1 = ");
    scanf("%d",&n1);

    if(n1>0)
    {
        printf("\n%d is a positive number",n1);
    }
    else if(n1<0)
    {
        printf("\n%d is a negative number",n1);
    }
    else
    {
        printf("\n%d is a neutral number",n1);
    }
    return 0;
}