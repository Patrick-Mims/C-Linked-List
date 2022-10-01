#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#include "list.h"
#include "photo.h"

int main(void)
{
  list_t head = new_node();

  insert(&head, 100);
  insert(&head, 300);
  insert(&head, 500);
  insert(&head, 700);
  insert(&head, 900);

  display_list(head);

  find_number(head, 500);

  load_list();

  struct node *tail = NewNode();

  return 0;
}
