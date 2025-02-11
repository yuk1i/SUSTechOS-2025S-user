#ifndef __SYSCALL_H__
#define __SYSCALL_H__

#include "../../os/types.h"
#include "../../os/syscall_ids.h"

// we only put syscall prototypes here, usys.pl will generate the actual syscall entry code
int fork();
int exec(char *path, char *argv[]);
void exit(int status);
int wait(int pid, int *status);
int getpid();
int getppid();

int sleep(int ticks);
void yield();

void *sbrk(int increment);

int read(int fd, void *buf, int count);
int write(int fd, void *buf, int count);


#endif // __SYSCALL_H
