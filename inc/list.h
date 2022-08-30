#ifndef LIST_H
#define LIST_H

typedef struct Node *list_t;

list_t new_node();
void insert(list_t *, int);
void display_list();

#endif
