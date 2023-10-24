#ifndef LIST_H
#define LIST_H

/**
 * single liked list
 * define name for struct
 * @n is int
 * @next is struct list
 * name for struct is listint_t
 */


typedef struct list

{ int n;
struct list *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
