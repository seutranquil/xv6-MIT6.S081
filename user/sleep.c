#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc != 2)
  {
    fprintf(2, "Usage: sleep seconds\n");
	exit(1);
  }
  int time = atoi(argv[1]);
  sleep(time);
  exit(0);
}

/*
In Unix and Unix-like operating systems, File descriptors 0, 1, and 2 correspond to 
standard input (stdin), standard output (stdout), and standard error (stderr), respectively.
*/