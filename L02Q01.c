// 1912160_L02Q01.c
// $ nano L02Q01.c
// Q.1. Write a C program to create a new child process using fork system call.

#include <stdio.h>
#include <unistd.h>

int main () {
	fork ();
	fork ();
	fork ();
	printf ("Child Process Created\n");
	return 0;
}

// $ gcc L02Q01.c -o run
// $ ./run
