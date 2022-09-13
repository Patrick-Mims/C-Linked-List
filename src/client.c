#include <stdio.h>
#include <stdlib.h>

#include "list.h"

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

  return 0;
}
