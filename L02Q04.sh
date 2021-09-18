# 1912160_L02Q04.sh
# $ nano L02Q04.sh
# Q.4. Write a c program or shell script to display file status using stat system call.

echo '
#include <stdio.h>
#include <sys/stat.h>

int main () {
	struct stat file;
	stat ("L02Q04.sh", &file);
	printf ("u_id => %d\n", file.st_uid);
	printf ("g_id => %u\n", (unsigned int) file.st_gid);
	printf ("size (in bytes) => %ld bytes\n", file.st_size);
	printf ("mode => %o\n", file.st_mode);
	return 0;
}
' > L02Q04.c
gcc L02Q04.c -o output
./output

# $ chmod +x L02Q04.sh
# $ ./L0Q04.sh

	
