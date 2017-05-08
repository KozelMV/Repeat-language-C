#include <stdio.h>
main() {
char ch;
	while((ch=getchar()) != EOF) {
		if(ch >=32 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 || ch == '\t') {
			putchar('\n');
		}
		putchar(ch);
	}
}