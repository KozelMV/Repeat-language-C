#include <stdio.h>
#define STOP 4
#define TAB 3
#define MAXLINE 1000

int main()
{
	char ch;
	char string[MAXLINE];
	int countIn=0;
	int countOut=0;
	while((ch=getchar()) != EOF)
	{
		printf("%c", ch);
		string[countIn] = ch;
		countIn++;
	}
	while(countOut != countIn)
	{
		printf("%s", "\t\t\t\t----------------");
		ch = string[countOut];
		if(ch == '.' && countOut+TAB-1 <= countIn)
		{
			for(int i=0; i < TAB-1;i++) //Продолжить работать от цикла
			{
				ch = string[++countOut];
				if(ch != '.')
				{
					printf("%c", ch);
					countOut++;
					i = TAB; //останавливаем цикл если попадается другой символ
				}
				else
				{
					string[countOut] = '>';
					countOut +=2;
				}
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