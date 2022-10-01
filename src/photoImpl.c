#include <stdio.h>
#include <stdlib.h>

#include "photo.h"

struct node *NewNode()
{
  struct node *node = NULL;

  if((node = malloc(sizeof(struct node))) == NULL) exit(EXIT_FAILURE);

  node->ptr = 0;

  return node;
}

static void InsertNode(struct node **list, const int item)
{
  struct node *n = NewNode();

  n->data = item;
  n->nextptr = *list;
  n->ptr++;

  *list = n;
}

static void DisplayList(struct node *list)
{
  struct node *d = NULL;

  for(d = list; d != NULL; d = d->nextptr)
  {
    printf("Item: %d\n", d->data);
  }
}

static struct node *Search(struct node *list, int item)
{
  /* while loop */
  while(list != NULL && list->data != item)
  {
    list = list->nextptr;
  }

  return list;
}

static struct node *SearchList(struct node *list, const int item)
{
  struct node *s = NULL;

  for(s = list; s != NULL; s = s->nextptr)
  {
    if(s->data == item)
    {
      return s;
    }
  }

  return NULL;
}

/*
static struct node *SizeList(struct node *list)
{
  return list->ptr;
}
*/







