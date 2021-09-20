// 1912160_lab2_5.c
// $ touch L02Q05.c
// Q.5. Write a C program or a shell script to open, display the contents of a directory, and close it using related system calls.

#include <dirent.h> 
#include <stdio.h>
#include <stdlib.h> 

int main () {
  DIR *dirp;
  struct dirent *dir;
  dirp = opendir(".");
  
  if (dirp == NULL) {
  	exit (0);
  }
   while (dir = readdir(dirp)) {
      printf("%s\n", dir->d_name);
    }
    closedir(dirp);
    return(0);
}

// $ gcc L02Q05.c -o output
// $ ./output
