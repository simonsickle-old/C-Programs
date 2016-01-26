#include <stdio.h>
#include <string.h>
#include <sys/types.h>

int main(void)
{
	if(t < 0)
		tt = -TSTEP;
	else
		tt = TSTEP;

	for(; fabs(t) > 1E-9; t -= tt)
	{
		fork();
		printf("Hello World\n");
	}
	
	return 0;
}