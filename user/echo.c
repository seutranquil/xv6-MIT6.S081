#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int i;

  for(i = 1; i < argc; i++){
    write(1, argv[i], strlen(argv[i]));
    if(i + 1 < argc){
      write(1, " ", 1);
    } else {
      write(1, "\n", 1);
    }
  }
  exit(0);
}

/*write():
size_t write (int fd, void* buf, size_t cnt); 
Writes cnt bytes from buf to the file or socket associated with fd
fd: file descriptor
buf: buffer to write data from.
cnt: length of the buffer
*/