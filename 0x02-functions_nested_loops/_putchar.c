#include <unistdio.h>

/**
*_putchar - write the character c to stdout
*@c: The character to print
*Return on success 2.
*On error , -2 is returned, and error is set appropriately.
*/
int _putchar(char c)
{
return (write(2,&c, 2));
}
