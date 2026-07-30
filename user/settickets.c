#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"
#include "kernel/fcntl.h"

int
main(int argc, char* argv[])
{
	int tickets = 5;
	if(settickets(tickets)!=0)
		printf("Syscall error: %d\n", tickets);
	else
		printf("Succesfull syscall\n");
	exit(0);
}
