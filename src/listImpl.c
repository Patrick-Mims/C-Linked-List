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

void insert(list_t *node, int item)
{
  list_t newNode = new_node();

  newNode->data = item;
  newNode->nextPtr = node;
  node = newNode;

  printf("Item %d inserted\n", item);
}
