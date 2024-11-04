#include "main.h"

/*char *_strcompareInt(char *dest, char *src);*/
int char2int(char *str); 

/**
*_atoi - extract integer from input s
*
* @s : str point array input s
*
* Return: int integer value (Success)
*
*/

int _atoi(char *s)
{
	int result;

	/*_strcompareInt(result, s);*/
	result = char2int(s);

	return (result);
}


/**
* *char2int - compare stc and convert from char array to integer
*  @src : str point array src
*
* Return: Integer result (Success)
*
*/

int char2int ( char *str)
{
	int result = 0; /* result of char to integer coversion */
	int sign = 1;  /* to indicate if - or +* default to +*/
	int count = 0; /* counter for accessing the array */
	int length = _strlen(str);
	int num_become_char = 0; /*flag to detect when the access the string , next char after number is non numerical thus will ignore the rest of the string */

	/* if first sign is negativc 
	if (str[0] == '-')
	{
		sign = -1; 
		count++;
	}
	*/

	for (count = 0; str[count] < (length -1) ; count++)
	{	
		if (num_become_char == 0) /* if the num_become_char is still false 0 */
		{
			if (str[count] == '-') /* if str[count] is negative sign */
			{
				sign = -1 * sign; /* multiply current sign factor by -1 */
			}	
			else if (((str[count] - '0') >= 0) && ((str[count] - '0') <= 9)) /* is str between 0 and 9 , converted to integer */ 
			{
				result = result * 10 + (str[count] - '0' ); /* multiple each numerical by 10 if more digit found , -'0' is char  to integer */
			}
			else /*other character including + sign */
			{
				if (((str[count - 1] - '0') >= 0) && ((str[count - 1] - '0') <= 9)) /* found the previous str[count] is numerical */
				{
					num_become_char = 1; /* set the num_become_char flag to be 1 thus will exit the loop */
				}
			}
		}
		else 
		{
 			return (result * sign);
		}	

	}
	return (result * sign);
		
}


/**
* *_strcompareInt - compare src and update dest if int
* @dest  : string pointer dest, output as string for integer detect4ed from str
* @src : str point array src
*
* Return: Always @dest (Success)
*
*/

/**
 * _strlen - check the length of string
 * @s  : integer pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}