/**
 * _putchar - custom putchar function to print a character
 *
 * @c : character to be printed
 * Return: 1 (Successful) else 0 (fail)
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
