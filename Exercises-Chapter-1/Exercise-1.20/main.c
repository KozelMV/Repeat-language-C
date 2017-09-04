#include <stdio.h>
#define TAB 3 //число символов до стопа
#define MAXLINE 1000

char ch;
char string[MAXLINE];
int countIn = TAB;
int countOut = TAB;

int main()
{
	while((ch = getchar()) != EOF)
	{
		string[countIn++] = ch;	
	}
	printf("%s\n", "\t\t\t\t-----------------------");
	while(countOut <= countIn)
	{
		ch = string[countOut];
		if(ch == '\\' && countOut + 1 <= countIn)
		{
			++countOut;
			ch = string[countOut];
			if(ch == 't')
			{
				for(int i=TAB-(countOut-1)%TAB,q=TAB-i; q < TAB; q++)
				{ /*i=TAB-x%TAB*//*получим i=3... i=2. i=1..*/
					printf("%c", '.'); 
				}
				countOut++;
			}
			else
			{
				printf("%c", ch);	
			}
		}
		else
		{
			printf("%c", ch);
			countOut++;
		}	
	}
	return 0;
}