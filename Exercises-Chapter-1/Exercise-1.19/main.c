#include <stdio.h>
#define LENGTH 1024
#define ENDSTRING LENGTH-1

char ch;
char string[LENGTH];
int counter = 0;

void reverse(char s[]);

int main()
{
	while((ch = getchar()) != EOF)
	{
		string[counter] = ch;
		if(ch == 10)
		{
			string[counter] = '\0';
			reverse(string);
			counter = 0;
		}
		else
			counter++;
	}
return 0;
}

void reverse(char s[])
{
	char temp;
	for(int i = counter-1, w = 0; w <= i; i--,w++)
	{
		temp = s[i];
		s[i] = s[w];
		s[w] = temp;
	}
	printf("%s\n", s);
}
