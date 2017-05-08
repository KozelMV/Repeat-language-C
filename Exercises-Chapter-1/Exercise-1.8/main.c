#include <stdio.h>
main() {
char c;
int  sp,tab,ent;
sp = tab = ent = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ') {
			sp++;
		}
		else if(c == '\t') {
			tab++;
		}
		else if(c == '\n') {
			ent++;
		}
		else {	}//others 
	}
printf("\n\n %s%i %s%i %s%i", "SPACE = ", sp, "TAB = ", tab, "ENTER = ", ent);	
}