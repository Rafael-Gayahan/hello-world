#include "apue.h"

int
main(void)
{
	printf("hello world from process ID %ld\n", (long)getpid());
	printf("Hello from Rafael");
	exit(0);
}
