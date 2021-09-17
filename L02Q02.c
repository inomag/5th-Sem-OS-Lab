// 1912160_L02Q02.c
// $ nano L02Q02.c
// Q.2. Write a c program to block a parent process until child completes using wait system call.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main () {
	pid_t pid = fork ();
	if (pid > 0) {
		printf ("Main Process Blocked for Child Process.\n");
		wait (NULL);
		printf ("Main Process Finished.\n");
	
	}
	else if (pid == 0) {
		printf ("Child Process Created.\nChild Process Finished.\n");
		exit (0);
	}
	else {
		printf ("Couldn't create Child Process\n.");
	}
	return 0;
}

// $ gcc L02Q02.c -o output
// $ ./output
