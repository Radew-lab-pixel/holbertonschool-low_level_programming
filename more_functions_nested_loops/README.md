##Task 0 : 
''
Write a function that checks for uppercase character.

    Prototype: int _isupper(int c);
    Returns 1 if c is uppercase
    Returns 0 otherwise
'''
#Answer: 
'''
#include "main.h"

/**
 * _isupper - check for upper case OF input c and return 1 if uppercase
 * @c : integer input c
 * Return as int 1 (successful) else 0
 *
 * Example : _isupper(B) -> return 1
 **/

int _isupper(int c)
{
        char reference[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i = 0;

        while (i < 26)
        {
                if ((c + '0') == (reference[i] + '0'))
                {
                        return (1);
                }
                i++;
        }
        return (0);
}
'''
