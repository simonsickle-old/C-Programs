#include <stdio.h>
#include <unistd.h>

int main(void)
{
	// Define the variable
	int number = 0;
	
	// Create an infinite loop by forcing while to be true
	while(1)
	{
		// Wait for one second, like a clock
		sleep(1);
		// Print the integer defined in the variable "number"
		printf("Number %d\n", number);
		// Add one to variable "number"
		number++;
	}
}