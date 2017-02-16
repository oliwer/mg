/*
 * AIX-specific support
 */
#include <stdio.h>
#include <time.h>
#include <utime.h>

#define NAME_MAX        FILENAME_MAX 
#define DEFFILEMODE     (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH) /* 0666*/
#define __dead          __attribute__((noreturn))
#define REG_STARTEND    0
#define TCSASOFT        0
#define __progname      "mg"


/* Functions */
void	       *reallocarray(void *, size_t, size_t);
char	       *fgetln(FILE *, size_t *);
size_t		strlcat(char *, const char *, size_t);
size_t		strlcpy(char *, const char *, size_t);
long long	strtonum(const char *, long long, long long, const char **);

