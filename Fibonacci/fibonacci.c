#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // Define Integers
    int a = 1;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;


    // Start an infinite loop
    while (1)
    {
        // Start pattern
        c = a + b;
        d = b + c;
        e = c + d;
        a = d + e;
        b = e + a;
        // At this point, the pattern repeat

        // Print all the results
        sleep(1);
        printf("%i\n", c);
        sleep(1);
        printf("%i\n", d);
        sleep(1);
        printf("%i\n", e);
        sleep(1);
        printf("%i\n", a);
        sleep(1);
        printf("%i\n", b);
        
    }
    return 0;
}