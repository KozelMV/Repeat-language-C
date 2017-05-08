#include <stdio.h>
main() {
printf("%s", "Please push (ctr+z) for enter EOF, or enter any (key+Enter) or (Enter): ");
	if(getchar() != EOF)
		printf("%s","true");
	else
		printf("%s", "false");
}