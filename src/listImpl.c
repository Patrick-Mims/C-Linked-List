#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct Node
{
  int data;
  struct node *nextPtr;
};

list_t new_node()
{
  list_t newNode = NULL;

  if((newNode = malloc(sizeof(list_t))) == NULL) exit(EXIT_FAILURE);

  return newNode;
}

/* pass a double pointer */
void insert(list_t *list, int item)
{
  /* create a new node */
  list_t newNode = new_node();

  newNode->data = item;
  newNode->nextPtr = *list;
  *list = newNode;

  printf("Item %d inserted\n", newNode->data);
}

void display_list(struct Node **list)
{
  int i = 1;
  for(; (*list)->nextPtr != NULL; *list = (*list)->nextPtr)
  {
    printf("%d. %d", i, (*list)->data);
    i = i + 1;
  }
}
