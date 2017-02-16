#ifndef ERR_H
#define ERR_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

__attribute__((noreturn))
static inline void
errx(int eval, const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	if (fmt != NULL)
		vfprintf(stderr, fmt, ap);
	fprintf(stderr, "\n");
	exit(eval);
	va_end(ap);
}

#endif /* ERR_H */

