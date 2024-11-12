#Week 6 : Malloc, Free 

#Task 0 : Float like a butterfly, sting like a bee
mandatory

Write a function that creates an array of chars, and initializes it with a specific char.

    Prototype: char *create_array(unsigned int size, char c);
    Returns NULL if size = 0
    Returns a pointer to the array, or NULL if it fails

#Answer 
'''
#include "main.h"

char *create_array(unsigned int size, char c);

/**
 * create_array - main entry
 *
 * Description: create an array and intialise the content with c
 *
 * @size : size of the array
 * @c : char c that is content
 * Return: NULL (invalid) or a  array
 */

char *create_array(unsigned int size, char c)
{
        unsigned int i = 0;

        char *a = (char *) malloc(size * sizeof(char));

        if (size <= 0)
        {
                return (NULL);
        }

        if (a == NULL)
        {
                return (NULL);
        }

        if (size <= 0)
        {
                return (NULL);
        }
        else
        {
                while (i < size)
                {
                        a[i] = c;
                        i++;
                }

        return (a);
        }
}
'''

#Task 1 : The woman who has no imagination has no wings
mandatory

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

    Prototype: char *_strdup(char *str);
    The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
    Returns NULL if str = NULL
    On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.

1-strdup.c
'''
#include "main.h"

int _strlen(char *s);
char *_strdup(char *str);

/**
 * _strdup - main entry
 *
 * Description: create an array and duplicate it
 *
 * @str : char string array that is to be duplicate
 * Return: NULL (invalid) or a  array
 */

char *_strdup(char *str)
{
        /*int size = _strlen(str); find length of str */
        /*char *duplicate;*/
        /*char *duplicate = malloc(sizeof(char) * (size + 1)); */
        /* int i = 0; */

        int count = 0;
        char *temp = str;

        int length;
        char *dest;
        /* create a temporary temp pointer due to free() in main.c */
        /* else free(): invalid pointer and Aborted (core dumped) */

        /* do a check of str prior to other checks to prevent memory eror */
        if (str == NULL)
        {
                return (NULL);
        }

        length = _strlen(temp); /* length of str */

        /*printf( "Length : %d ", length);*/
        /*if (length == 0) */
        /* return ('\0'); */

        dest = (char *) malloc((length + 1) * sizeof(char));

/*duplicate = (char *) malloc(size * sizeof(char)); */
/*+1 for '\0' character */
/*size = sizeof(str); */
/*printf("size : %d",size);*/
        if (dest == NULL)
        {       free (dest);
                return (NULL);
        }

        /**if(*temp == '\0') **/

                /* if (temp == NULL) does not work in old version */
        /**     return (NULL); **/

        else
        {
                while (count < length)
                {
                        dest[count] = temp[count];
                        count++;
                }
                dest[length] = '\0';
                return (dest);
        }
}

/**
 * _strlen - check the length of string
 *
 * Description: create an array and intialise the content with c
 *
 * @s : size of the array
 * Return: NULL (invalid) or a integer size
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

'''
#Task 2 :  He who is not courageous enough to take risks will accomplish nothing in life
mandatory

Write a function that concatenates two strings.

    Prototype: char *str_concat(char *s1, char *s2);
    The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
    if NULL is passed, treat it as an empty string
    The function should return NULL on failure

2-str_concat.c
'''
#include "main.h"

int _strlen(char *s);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);

/**
 * str_concat - main entry
 *
 * Description: concenate both arrays
 *
 * @s1 : char string array
 * @s2 : char string array
 * Return: NULL (invalid) or a  array
 */

char *str_concat(char *s1, char *s2)
{

        int count = 0;
        char *temp1 = s1;
        char *temp2 = s2;

        int length_s1, length_s2, count_s2;
        char *dest;
        /* create a temporary temp pointer temp1 and temp2  due to free() in main.c */
        /* else free(): invalid pointer and Aborted (core dumped) */

        /* do a check of str prior to other checks to prevent memory eror */
        if (temp1 == NULL)
        {
                temp1 = "";
        }

        if (temp2 == NULL)
        {
                temp2 = "";
        }

        length_s1 = _strlen(temp1); /* length of s1 */
        length_s2 = _strlen(temp2); /* length of s2 */

        /*printf( "Length : %d %d\n", length_s1, length_s2);*/
        /*if (length == 0) */
        /* return ('\0'); */

        dest = (char *) malloc((length_s1 + length_s2 + 1) * sizeof(char));

/*duplicate = (char *) malloc(size * sizeof(char)); */
/*+1 for '\0' character */
/*size = sizeof(str); */
/*printf("size : %d",size);*/

        /**if(*temp == '\0') **/

        /* if (temp == NULL) does not work in old version */
        /**return (NULL); **/

        if (dest == NULL)
        {
                free(dest);
                return (NULL);
        }

        else
        {

        /* copy s1 to dest */
                while (count < length_s1)
                {
                        dest[count] = temp1[count];
                        count++;
                }
                /* copy s2 to dest */
                count_s2 = 0;

                while (temp2[count_s2] != '\0')
                {
                        dest[count_s2 + count] = temp2[count_s2];
                        /*printf(" temp2 : %c", temp2[count_s2]); */
                        count_s2++;
                }
                dest[count_s2 + count] = '\0';
                return (dest);
        }
}

/**
 * _strlen - check the length of string
 *
 * Description: create an array and intialise the content with c
 *
 * @s : size of the array
 * Return: NULL (invalid) or a integer size
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
'''

#Task 3 : If you even dream of beating me you'd better wake up and apologize
mandatory

Write a function that returns a pointer to a 2 dimensional array of integers.

    Prototype: int **alloc_grid(int width, int height);
    Each element of the grid should be initialized to 0
    The function should return NULL on failure
    If width or height is 0 or negative, return NULL

3-alloc_grid.c
'''
#include "main.h"

int _strlen(char *s);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);


/**
 * alloc_grid - main entry
 *
 * Description: create a 2D array
 *
 * @width : int width ( column of array)
 * @height : int height (row of array)
 * Return: NULL (invalid) or a  array
 */

int **alloc_grid(int width, int height)
{
        int i = 0;
        int j, **arr;  /*  **arr = arr[][] */

        /* Allocation */
        if ((width <= 0) || (height <= 0))
        {
                return (NULL);
        }

        arr = (int **) malloc(height * sizeof(int *)); /* same as arr[][]*/
        /* sizeof(int) size is 4 bytes regardless if 32 or 64 bits machine  */
        /* thus has to set to sizeof(int*) as 32 bits machine, */
        /* integer size is  4 bytes */
        /* 64 bits machine, however will be 8 bytes */

        if (arr == NULL)
        {
                free(arr);
                return (NULL);
        }

        else /*arr created */
        {
                /*int **arr = malloc(height * sizeof(int*)); */
                /* same as arr[][] */
                /*int* points to an address location as */
                /*it is a pointer to a variable*/
                /* for 32 bits machine , its 4 bytes */
                /* for 64 bits machine , its 8 bytes */

                for (i = 0; i < height; i++)
                {
                        arr[i] = (int *) malloc(width * sizeof(int));
                        /* arr[i] = (int*) malloc(width * sizeof(int*)); */
                        /*      overcome malloc fails in bot*/

                        if (arr[i] == NULL)
                        {
                                while (i >= 0) /* free arr[i] * to pass valgrind */
                                {
                                        free(arr[i]);
                                        free(arr);
                                        i--;
                                }
                                        return (NULL);
                        }
                }

                /*  Utilization - set 0 in all elements as malloc only */
                /*      create garbage values */
                for (i = 0; i < height; i++)
                {
                        for (j = 0; j < width; j++)
                        {
                        /*if (arr[j] == NULL) */
                        /*{*/
                        /* while (i >= 0) */
                                /*{*/
                                /* free(arr[i]); */
                                /*      i--; */
                                /*      }       */
                                /* free(arr);   */
                                /* return (NULL); */
                                /*      }*/
                                arr[i][j] = 0;  /* fill garabage value with 0 */
                        }
                }
                return (arr); /* return arr in 2D */
        }
}

/**
 * str_concat - main entry
 *
 * Description: concenate both arrays
 *
 * @s1 : char string array
 * @s2 : char string array
 * Return: NULL (invalid) or a  array
 */

char *str_concat(char *s1, char *s2)
{

        int count = 0;
        char *temp1 = s1;
        char *temp2 = s2;

        int length_s1, length_s2, count_s2;
        char *dest;
        /* create a temporary temp pointer temp1 and temp2  due to free() in main.c */
        /* else free(): invalid pointer and Aborted (core dumped) */
        /* do a check of str prior to other checks to prevent memory eror */
        if (temp1 == NULL)
        {
                temp1 = "";
        }

        if (temp2 == NULL)
        {
                temp2 = "";
        }

        length_s1 = _strlen(temp1); /* length of s1 */
        length_s2 = _strlen(temp2); /* length of s2 */
        /*printf( "Length : %d %d\n", length_s1, length_s2);*/
        /*if (length == 0) */
        /* return ('\0'); */
        dest = (char *) malloc((length_s1 + length_s2 + 1) * sizeof(char));

        /*duplicate = (char *) malloc(size * sizeof(char)); */
        /*+1 for '\0' character */
        /*size = sizeof(str); */
        /*printf("size : %d",size);*/

        /**if(*temp == '\0') **/
        /* if (temp == NULL) does not work in old version */
        /**return (NULL); **/

        if (dest == NULL)
        {
                free(dest);
                return (NULL);
        }

        else
        {

        /* copy s1 to dest */
                while (count < length_s1)
                {
                        dest[count] = temp1[count];
                        count++;
                }
                /* copy s2 to dest */
                count_s2 = 0;

                while (temp2[count_s2] != '\0')
                {
                        dest[count_s2 + count] = temp2[count_s2];
                        /*printf(" temp2 : %c", temp2[count_s2]); */
                        count_s2++;
                }
                dest[count_s2 + count] = '\0';
                return (dest);
        }
}

/**
 * _strlen - check the length of string
 *
 * Description: create an array and intialise the content with c
 *
 * @s : size of the array
 * Return: NULL (invalid) or a integer size
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

#Task 4 :  It's not bragging if you can back it up
mandatory

Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

    Prototype: void free_grid(int **grid, int height);
    Note that we will compile with your alloc_grid.c file. Make sure it compiles.

4-free_grid.c
'''
#include "main.h"

void free_grid(int **grid, int height);

/**
 * free_grid - main entry
 *
 * Description: free previously a 2D array
 * from 3-alloc_grid.c
 * @grid : int array grid
 * @height : int height (row of array)
 * Return: void
 */

void free_grid(int **grid, int height)
{
        int count = 0;
        int length;

        if (grid == NULL)
        {
                free(grid);
                return;
        }

        /*** Redudant - discovered later not needed **/
        while (*grid[count] != '\0')
        {
                if (grid[count] == NULL)
                {
                        /* to free grid[count] to please valgrind */
                        while (count >= 0)
                        {
                                free(grid[count]); /*free grid[][]*/
                                count--;
                        }
                        free(grid); /* Free grid[]) */
                        return; /*return NULL and terminate */
                }
                else
                {
                        count++;
                }
        }
        length = count; /* length of int array */
        count = length;
        /*******************************************/
        count = 0;
        while (count < height)
        {
                free(grid[count]); /* x row of grid */
                count++;
        }
        free(grid);
}
