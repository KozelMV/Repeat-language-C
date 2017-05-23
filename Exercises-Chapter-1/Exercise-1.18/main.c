#include <stdio.h>
#define length 100
#define true 1
#define false 0
int checkSpace = false;
int checkNewline = false;
int counter = 0;
char ch; 
char string[length];
int main() {
	while((ch = getchar()) != EOF) {
		/* Checking on more enter a space and more enter a new line */
		if(ch == ' ' && checkSpace == false) {
			checkSpace = true;
			string[counter] = ch;
			counter++;
		}
		else if(ch != ' ') {
			if(ch == '\n' && checkNewline == false) {
			checkNewline = true;
			string[counter] = ch;
			counter++;
			}
			else if(ch != '\n') {
				checkNewline = false;
				checkSpace = false;
				string[counter] = ch;
				counter++;
			}
			else 
				{ /*	*/}
		}
		else
			{ /*	*/ }
		/* end	*/
	}
	printf("%s", string);
return 0;
}