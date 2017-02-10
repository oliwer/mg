#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void errx(int rc, const char *fmt, ...)
{
  va_list args;
  va_start(args, fmt);
  fprintf(stderr, fmt, args);
  va_end(args);
  
  exit(rc);
}

