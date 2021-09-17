// 1912160_L02Q03.c
// $ nano L02Q03.c
// Q.2. Write a c program to load an executable program in a child processes exec system call.

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h> 
#include <stdlib.h>
#include <errno.h>  
#include <sys/wait.h>
  
void waitStatus (pid_t pid, int status) {
	if (waitpid(pid, &status, 0) > 0) {              
		if (WIFEXITED(status) && !WEXITSTATUS(status)) 
			printf("program execution successful\n");
		else if (WIFEXITED(status) && WEXITSTATUS(status)) {
			if (WEXITSTATUS(status) == 127)
                    		printf("execv failed\n");
                	else
                		printf("program terminated normally but returned a non-zero status\n");
                }
            	else 
               	printf("program didn't terminate normally\n");            
        } 
        else 
        	printf("waitpid() failed\n");
}
  
int main () {
	pid_t  pid;
	int status;
	pid = fork();
	
	if (pid == 0){
   		printf ("Child Process Running\n");
	  	char * argv_list[] = {"ls","-lart","/bin/ls",NULL};
		execv("ls",argv_list);
		exit(0);
	}
	else if ( pid > 0) {
		printf ("Parent Process Running\n");
      		waitStatus (0);
      		exit(0);
      	}
      	else {
      		printf ("Child Process Failed");
      	}
      	return 0;
}

// $ gcc L02Q03.c -o run
// $ ./run
