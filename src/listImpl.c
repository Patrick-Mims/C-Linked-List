#include <stdio.h>
#include <stdlib.h>

#include "list.h"

#define INDEX 100

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

list_t newNodeStr(int size)
{
  list_t newNodeStr = NULL;

  if((newNodeStr = malloc(sizeof(char) * (size + 1))) == NULL) exit(EXIT_FAILURE);

  return newNodeStr;
}

void insert(struct Node **list, int item)
{
  struct Node *newNode = NULL;

  if((newNode = malloc(sizeof(struct Node))) == NULL) exit(EXIT_FAILURE);

  newNode->data = item;
  newNode->nextPtr = *list;
  *list = newNode;
}

void display_list(struct Node *list)
{
  for(; list != NULL; list = list->nextPtr)
  {
    printf("%d\n", list->data);
  }
}

void find_number(struct Node *list, int item)
{
  for(; list != NULL; list = list->nextPtr)
  {
    if(list->data == item)
    {
      printf("Item Found!\n");
    } else {
      printf("Item Not Found!\n");
    }
  }
}

void insert_str()
{
  struct Node *node = NULL;

  printf("This is search...\n");

  node = newNodeStr(20);
}

void load_list()
{
  FILE *fp = NULL;
  const int size = 100;
  char line[INDEX] = {0};

  if((fp = fopen("MOCK_DATA.csv", "r")) == NULL)
  {
    printf("File Doesn't Exist");
    exit(EXIT_FAILURE);
  }


  while(fgets(line, size, fp))
  {
    printf("%s", line);
  }

  printf("Fetching addresses...\n");

  fclose(fp);
}
