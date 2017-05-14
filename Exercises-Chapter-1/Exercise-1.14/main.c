#include <stdio.h>
#define MAXCH 256
int chars[MAXCH] = {0};
int orderChars[MAXCH] = {0};
int countChars = 0;
int allCountChars = 0;
int test = 0;
main() {
	int BiggestNumbersChars = 0;
	char ch;
	
	while(( ch = getchar()) != EOF) {
		int tempCh = ch;
		allCountChars++;
		for(int i = 0 ; i < countChars; i++) { //test concurrences
			if(orderChars[i] == ch) {
				test = 1;
			}
		}
		if(test == 0) {
			orderChars[countChars++] = ch; // get order chars
		}
		test = 0;
		
		if(ch < 0) {
			tempCh =-tempCh + 127;
			chars[tempCh] +=1;
		}
		else {
			chars[tempCh] +=1;
		}
		
		if(BiggestNumbersChars < chars[tempCh]) {
			BiggestNumbersChars = chars[tempCh];   
		}			
	}

	// show vertical histogram
	int copBiggestNumb = BiggestNumbersChars;
	for(int w = 0; w < BiggestNumbersChars; w++) {
		for(int i = 0; i < countChars; i++) {
			
			int temp;
			if(orderChars[i] < 0) {
				temp = orderChars[i];
				temp =-temp + 127;
			}
			else {
				temp = orderChars[i];
			}
			//printf("%i", chars[temp]);
			
			if(chars[temp] < copBiggestNumb) {
				printf("%c ", ' ');
			}
			else {
				printf("%c ", '|');
			}
		}
	copBiggestNumb--;
	printf("\n");
	}
	// ==========================================
		// show on display used chars
	for(int i = 0; i < countChars; i++) {
		if(orderChars[i] == ' ') {
			printf("%s ", " ");
		}
		else if(orderChars[i] == '\n') {
			printf("%s ", "n");
		}
		else if(orderChars[i] == '\t') {
			printf("%s ", "t");
		}
		else
		printf("%c ", orderChars[i]);
	}
	printf("\n%s%i %s%i %s%i", "All chars=", allCountChars, "| Different characters=",countChars, "| BiggestNumbersChars=", BiggestNumbersChars);
}