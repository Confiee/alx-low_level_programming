nclude "main.h"
/**
 *  * print_alphabet - Function prototype
 *   * Description -  prints the alphabet, in lowercase, followed by a new line
 *    * Return : void.
 **/
void print_alphabet(void)
{
char x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
