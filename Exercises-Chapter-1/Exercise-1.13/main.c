#include <stdio.h>
#define true 1
#define false 0
#define MAxCHARS 50	//4'096 max chars in cmd
#define MAxWORDS 8192
main() {
char ch;
int lenWords[MAxWORDS];
char words[MAxWORDS][MAxCHARS];
int countChar, counWord, biggestWord, sign;
countChar = counWord = biggestWord = sign = 0;
	while((ch = getchar()) != EOF) {
		if(ch >=32 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 || ch == '\t' || ch == '\n') {
			if(countChar == 0) { /*Inactivity with two or more punctuation marks*/ }
			else {
				sign = 1;
				lenWords[counWord] = countChar;
				words[counWord][countChar] = '\0';
				counWord++;
				if(countChar > biggestWord) {
					biggestWord = countChar;
				}
				countChar = 0;
			}
		}
		else {
			sign = 0;
			words[counWord][countChar] = ch;
			countChar++;
			
		}
	}
	//Vertical histogram output
int copBiggestWord = biggestWord;
	for(int w = 0; w < biggestWord; w++) {
		for(int i = 0; i < counWord; i++) {
			if(lenWords[i] < copBiggestWord) {
				printf("%c", ' ');
			}
			else {
				printf("%c", '|');
			}
		}
	copBiggestWord--;
	printf("\n");
	}
	for(int i = 0;i < counWord ; i++) {
			printf("%c", '-');
	}
	printf("\n");
	//End vertical output
//////////////////////////////////////////////////////////////////////
	//Words of horizontal output on display.
	for( int i = 0, q; i < counWord; i++) {
		q = 0;
		if (i <= 8) //Alignment of output
			printf("%s%i%c", "000",i+1 , '.');
		else if (i <= 98 && i > 8)	
			printf("%s%i%c", "00", i+1, '.');
		else if (i <= 998 && i > 98)
			printf("%s%i%c", "0", i+1, '.');
		
		while ( words[i][q] != '\0') {
			ch = words[i][q];
			putchar(ch);
			q++;			
		}
		if(q > 0){
			for(int i = q;i <= biggestWord+1 ; i++) {
				printf("%c", ' ');
			}
			if(q <= 9) // Alignment of output
				printf("%s%i%c", "<0", q, '>');
			else
				printf("%c%i%c", '<', q, '>');
			printf("%c", '|');
		}	
		for(;q > 0; q--) {
			printf("%c", '-');
		}
		printf("%c", '\n');
	}
	//End of horizontal histogram output
//////////////////////////////////////////////////////////////////////
	for(int i = 0;i <= biggestWord*2+8 ; i++) {
			printf("%c", '_');
		}
	printf("\n%s%d %s%d\n", "WORDS=", counWord, " Biggest word=" , biggestWord);
}