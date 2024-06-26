//Challenge 4
//-----------
// This challenge is incredibly similar to challenge 3, but
// is a bit more of a practical example.	the code in this challenge
// is a bit more complex than in the previous challenges,
// so it would be in your interest to take a bit of time to figure out
// what is going on.

#include <stdio.h>
#include <string.h>

void win(){
		setresuid(505,505,505);
		system("/bin/sh");
		}

void lose(){
		printf("you made it to:	%p.	you were looking for %p.", lose,win);
		}

int main (int argc, char ** argv){
		void (*fp)(void) = lose;
		char userString[80];
		memcpy(userString, argv[1], strlen(argv[1]));
		memset(userString, 0, strlen(argv[1])-4);
		fp();
		return 0;
		}