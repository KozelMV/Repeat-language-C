#include <stdio.h>
main() {
char c;
int countSpace = 0;
	while((c=getchar()) != EOF) {
		if(c == ' ') {
			if(countSpace < 1){
				countSpace++;
				putchar(c);
			}
			else {	}	
		}
		else {
			putchar(c);
			countSpace = 0;
		}
	}
}