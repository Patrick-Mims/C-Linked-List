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

  return node;
}

/* pass a double pointer */
void insert(list_t *node, int item)
{
  /* create a new node */
  list_t newNode = new_node();

  newNode->data = item;
  newNode->nextPtr = node;
  node = newNode;

  printf("Item %d inserted\n", item);
}
