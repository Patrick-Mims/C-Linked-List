#ifndef LIST_H
#define LIST_H

/* Incomplete Type */
/* An incomplete type is a type that describes an identifier but lacks
 * information needed to determine the size of the identifier.*/
typedef struct Node *list_t;

list_t new_node();
void insert(struct Node **, int);
void display_list(struct Node *);
void find_number(struct Node *, int);
void load_list();

#endif
