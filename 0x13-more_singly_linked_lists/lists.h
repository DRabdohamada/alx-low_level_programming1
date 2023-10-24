#ifndef LIST_H
#define LIST_H

typedef struct list { int n ; struct list * next } listint_t;

size_t print_listint(const listint_t *h);

#endif
