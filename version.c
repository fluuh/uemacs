#include <stdio.h>
#include "version.h"

const char *progname = PROGRAM_NAME;

void version(void)
{
	printf("%s version %s\n", PROGRAM_NAME_LONG, VERSION);
}
