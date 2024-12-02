#Week 9 : Linked list
##Task 0. Print list

0-print_list.c
```
A function that prints all the elements of a list_t list.

    Prototype: size_t print_list(const list_t *h);
    Return: the number of nodes
    Format: see example
    If str is NULL, print [0] (nil)
```

##Task 1. List Length

1-list_len.c
```
A function that returns the number of elements in a linked list_t list.

    Prototype: size_t list_len(const list_t *h);
```

##Task 2. Add Node

2-add_node.c
```
A function that adds a new node at the beginning of a list_t list.

    Prototype: list_t *add_node(list_t **head, const char *str);
    Return: the address of the new element, or NULL if it failed
```

##Task 3. Add Node at the end
3-add_node_end.c
```
Write a function that adds a new node at the end of a list_t list.

    Prototype: list_t *add_node_end(list_t **head, const char *str);
    Return: the address of the new element, or NULL if it failed
```

##Task 4 : Free List
4-free_list.c
'''
Write a function that frees a list_t list.

    Prototype: void free_list(list_t *head);
'''


##Header File 

lists.h

'''
#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
        char *str;
        unsigned int len;
        struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
```
