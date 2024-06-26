// challenge 2
// -----------
//Hints: Check the man page for "system".
//						Understanding environment variables is important
//						You have write permission in the /tmp directory.

#include <stdlib.h>


void main(){
		setresuid(503,503,503);
		system("id");
		return 0;
		}