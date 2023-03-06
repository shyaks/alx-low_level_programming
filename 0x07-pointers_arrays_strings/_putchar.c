#include <unistd.h>

/* Write a single character to stdout */
int _putchar(char c)
{
    return write(1, &c, 1);
}
