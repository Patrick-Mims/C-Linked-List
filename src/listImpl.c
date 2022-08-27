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
