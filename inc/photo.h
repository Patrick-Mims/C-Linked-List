#ifndef PHOTOLIST_H
#define PHOTOLIST_H

#define INDEX 20

struct node
{
  char email[INDEX];
  int data;
  int ptr;
  struct node *nextptr;
};

struct node *NewNode();
static void InsertNode(struct node **, const int);
static void DisplayList(struct node *);
static struct node *Search(struct node *, const int);
static struct node *SearchList(struct node *, const int);

#endif
