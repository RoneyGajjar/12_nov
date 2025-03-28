/*
write a c program to create a structure named Bank with the following fields: name, account number, balance. and then make userdefined functions to deposit and withdraw money from the account and display the the details of the account. give 2 options for display function 1. display all details 2. display particular details based on account number and if the account number is not found then display "account not found" also if user wants to display all the details then display the details in proper tabular format use file to store data in local storage.
example:
------------------------------------
| name  | account_number | balance |
------------------------------------
| abc   | 123            | 1000    |
| xyz   | 456            | 2000    |
| pqr   | 789            | 3000    |
------------------------------------
*/
#include<stdio.h>
struct bank
{
    char name[50];
    int acno;
    double balance;
}b[50];
int total,choice,i;
int main()
{
    up:
    printf("\n1.Add Account");
    printf("\n2.Display all Account");
    printf("\n3.Display particular Account");
    printf("\n4.Deposit Money");
    printf("\n5.Withdraw Money");
    printf("\n6.Close Account");
    printf("\nEnter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            add();
        break;
        case 2:
            displayall();
        break;
        case 3:
            displayparticular();
        break;
        case 4:
            deposit();
        break;
        case 5:
            withdraw();
        break;
        case 6:
            acclose();
        break;

    }
    char ch;
    printf("\nPress 'y' to continue and 'n' to exit = ");
    scanf(" %c",&ch);
    if(ch=='y'||ch=='Y')
    {
        goto up;
    }
    else
    {
        goto end;
    }
    end:
    return 0;
}

void add()
{
    int num,i;
    printf("\nEnter the number of account you want to add = ");
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
        printf("\nEnter the details of Account %d",i+1);
        printf("\nEnter Name = ");
        scanf("%s",b[i].name);
        printf("\nEnter Account No. = ");
        scanf("%d",&b[i].acno);
        printf("\nEnter balance =");
        scanf("%lf",&b[i].balance);
        total++;
    }
}

void displayall()
{
    printf("\n--------------------------------------");
    printf("\n|Name|\t|Account No.|\t|Balance|");
    printf("\n--------------------------------------");
    for(i=0;i<total;i++)
    {
        printf("\n%s\t%d\t\t%.2lf",b[i].name,b[i].acno,b[i].balance);
    }
    printf("\n--------------------------------------");
    
}

void displayparticular()
{
    int num,flag=0,index;
    printf("\nEnter the Account no. = ");
    scanf("%d",&num);

    for(i=0;i<total;i++)
    {
        if(b[i].acno==num)
        {
            flag==1;
            index=i;
            break;
        }
    }
    if(flag==1)
    {
        printf("\n--------------------------------------");
        printf("\n|Name|\t|Account No.|\t|Balance|");
        printf("\n--------------------------------------");
        printf("\n%s\t%d\t\t%.2lf",b[index].name,b[index].acno,b[index].balance);
        printf("\n--------------------------------------");    
    }
    else
    {
        printf("\nAccount Not Found");
    }

}

void deposit()
{
    int num,flag=0,index;
    double amount;
    printf("\nEnter the account number = ");
    scanf("%d",&num);
    printf("\nEnter the amount = ");
    scanf("%lf",&amount);

    for(i=0;i<total;i++)
    {
        if(b[i].acno==num)
        {
            flag=1;
            index=i;
            break;
        }
    }   
    if(flag==1)
    {
        b[index].balance = b[index].balance + amount; 
    }
    else
    {
        printf("\nAccount not found");
    }
}

void withdraw()
{
    int num,flag=0,index;
    double amount;
    printf("\nEnter the account number = ");
    scanf("%d",&num);
    printf("\nEnter the amount = ");
    scanf("%lf",&amount);

    for(i=0;i<total;i++)
    {
        if(b[i].acno==num)
        {
            flag=1;
            index=i;
            break;
        }
    }   
    if(flag==1)
    {
        if(b[index].balance>amount)
        {
            b[index].balance = b[index].balance - amount; 
        }
        else
        {
            printf("\nInsuficient balance");
        }
    }
    else
    {
        printf("\nAccount not found");
    }
}

void acclose()
{
    int num,index,flag=0;
    printf("\nEnter the account number = ");
    scanf("%d",&num);

    for(i=0;i<total;i++)
    {
        if(b[i].acno==num)
        {
            flag=1;
            index=i;
            break;
        }
    }   
    if(flag==1)
    {
        for(i=index;i<total;i++)
        {
            b[i] = b[i+1];
        }
        total--;
    }
    else
    {
        printf("\nAccount not found");
    }
}