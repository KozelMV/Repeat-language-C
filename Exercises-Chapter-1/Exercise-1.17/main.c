#include <stdio.h>
#define MAX 80	 /* минимальный размер строки */	
#define SIZE 100 /* максимальный размер массива */
char string[SIZE];	   // для хранения строк подходящих по заданию 80+
int i = 0;			   // счетчик	 	
int main() {
	while((string[0] = getchar()) != EOF) {// работаем до команды
		while((string[i] = getchar()) != '\n') {
			if(i == SIZE - 1)
				string[i-1] = '\0';
			else
				++i;
		}
		if(i >= MAX) {	//если удовлетворяем условия задания
			if(i > MAX) //если достигли лемита
				printf("%s...\n", string); //делаем красиво :)
			else
				printf("%s", string);	
		}
		else			//если строка меньше 80 символов
			printf("%s%i\n", "Size = " , i+1);
		i = 0;
	}
return 0;
}