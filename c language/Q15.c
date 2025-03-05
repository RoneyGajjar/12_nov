//15.Convert school’s name in abbreviated form
#include<stdio.h>
int main() {
    char ch;
    char abbreviation[50]; 
    int j = 0; 
    int firstChar = 1; 

    printf("Enter the school's name (end with '.' to finish): ");

    while ((ch = getchar()) != '.') 
	{
        if (ch != ' ' && (firstChar || (j > 0 && abbreviation[j - 1] == ' '))) 
		{
            abbreviation[j++] = ch; 
            firstChar = 0;
        } 
		else if (ch == ' ') 
		{
            if (j > 0 && abbreviation[j - 1] != ' ') 
			{
                abbreviation[j++] = ' ';
            }
        }
    }
    abbreviation[j] = '\0';

    printf("Abbreviated form: ");
    for (int i = 0; i < j; i++)
	{
        if (i == 0 || abbreviation[i - 1] == ' ') 
		{
            putchar(abbreviation[i]);
        }
    }
    putchar('\n');

    return 0;
}

