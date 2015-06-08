#include <stdio.h>
#include <string.h>

int bof(char *str)
{
	char buffer[1024];
	

	strncpy(buffer, str, sizeof(buffer)-1);
	printf(buffer);
	exit(0);
}

int main(int argc, char ** argv)
{
	bof(argv[1]);
	return 1;
}
