#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: the character to write
 *
 * Return: On success, return the number of bytes written (1).
 * On error, return -1 and set errno appropriately.
 */
int _putchar(char c)
{
    return write(STDOUT_FILENO, &c, 1);
}

