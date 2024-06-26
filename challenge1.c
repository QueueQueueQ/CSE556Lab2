//Challenge 1
//-----------
// Hints: pay attention to the owner of this file, "winner1".
//				It is probably a good idea for you to write
//				out the command that is being executed entirely to see
//				what is going on.	If you don't know what system(command)
//				does, use man and google to find out.

#include <stdlib.h>
#include <stdio.h>
int main() {
		char command[100];
		char userString[100];
		
		printf("Input a string to echo: ");
		gets(userString);
		snprintf(command, sizeof(command), "echo \"%s\"",userString);
		setresuid(502,502,502);
		system(command);
		return 0;
}
