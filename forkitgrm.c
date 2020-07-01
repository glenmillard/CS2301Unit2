// this was written by me Glen Millard - no, I didn't steal it. I borrowed it! You can have it back whenever you want
// seriously this is my code for Unit 2 - hopefully this is what you are looking for.


#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
//including all of the libraries that I may need - probably overkill - I don't need all of them but, meh...

int main(int argc, char *argv[]) //declaring main function the new-skool way.  
{
	int x = 10; //setting a variable ahead of time
	if (fork() == 0) {
		printf("I'm the childish one. %d\n", getpid()); // if there is a process running start up another
		printf("The variable is %d\n", x); // show the variable - it's the same with both PIDs
	} else {
		int x = 15;
		printf("I'm the old one. %d\n", getpid());
		printf("The variable is %d\n", x);
	}
}
