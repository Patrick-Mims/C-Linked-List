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

//void insert(list_t *list, int item)
void insert(struct Node **list, int item)
{
  //list_t newNode = new_node();
  struct Node *newNode = NULL;

  if((newNode = malloc(sizeof(struct Node))) == NULL) exit(EXIT_FAILURE);

  newNode->data = item;
  newNode->nextPtr = *list;
  *list = newNode;

  printf("Item %d inserted\n", newNode->data);
}

void display_list(struct Node **list)
{
  static int i = 1;

  for(; (*list)->nextPtr != NULL; *list = (*list)->nextPtr)
  {
    printf("%d. %d", i, (*list)->data);
    i = i + 1;
  }
}

struct Node *find_number(struct Node *list, int number)
{
  list_t p = new_node();
  p = (struct Node *)list;

  /*
  for(p = list; p != NULL && number > p->data; p = p->nextPtr)
  {
    if(p != NULL && number == p->data)
    {
      return p;
    }
  }
  */

  return NULL;
}
