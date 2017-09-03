#include <stdio.h>
#define TAB 3
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
		//сравниваем символ с первым символом табуляции
		//проверяем не выйдем ли за массив при прасмотре второго символа
		if(ch == '\\' && countOut + 1 <= countIn)
		{
			char tempCh;
			tempCh = string[countOut++];
			if(tempCh == 't')
			{
				/*x=любое число*/
				/*i=TAB-x%TAB*//*получим i=3... i=2. i=1..*/
				/* написать на основе этого цикл*/
				for(int i=TAB-countOut%TAB; i > 0; i--)
				{
					printf("%c", '.');
				}
				countOut+=2;
			}
			else
			{
				printf("%c", ch);
				countOut++;
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