// challenge 3
// -----------
// Hints: "gets" is bad.	Very bad.	This challenge shows why.
//						Simple math will solve this challenge.
//						This system uses little Endian Byte order

#include <stdlib.h>



int main() {
		int bob;
		char alice[80];
		
		printf("alice is at %08x, bob is at: %08x\n", &alice, &bob);
		printf("\nHelp alice and bob meet: ");
		gets(alice);
		
		if (bob==0x41414142){
				setresuid(504,504,504);
				system("/bin/sh");
				}
		}