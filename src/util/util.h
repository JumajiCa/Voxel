
#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>
#include <assert.h>

#include "types.h"
#include "umath.h"

// Fancy Colours. 
#define ANSI_RED     "\x1b[31m"
#define ANSI_GREEN   "\x1b[32m"
#define ANSI_YELLOW  "\x1b[33m"
#define ANSI_BLUE    "\x1b[34m"
#define ANSI_MAGENTA "\x1b[35m"
#define ANSI_CYAN    "\x1b[36m"
// #define ANSI_RESET   "\x1b[0m"
#define ANSI_HIGHLIGHT     "\x1b[40m"
#define ANSI_RESET() printf("\x1b[0m");

#define ARRLEN(a) (sizeof(a) / sizeof(a[0]))



#endif
