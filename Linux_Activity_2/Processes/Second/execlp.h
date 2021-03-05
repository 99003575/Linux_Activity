#ifndef __EXECLP_H
#define __EXECLP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /* for fork */
#include <sys/types.h> /* for pid_t */
#include <sys/wait.h> /* for wait */

void compile();

#endif
