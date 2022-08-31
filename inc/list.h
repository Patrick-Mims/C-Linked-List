#ifndef LIST_H
#define LIST_H

typedef struct Node *list_t;

list_t new_node();
void insert(struct Node **, int);
void display_list();
struct Node *find_number(struct Node *, int);

#endif
