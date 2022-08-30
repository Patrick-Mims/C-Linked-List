#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(void)
{
  list_t head = new_node();

  insert(&head, 100);

  display_list(&head);
  insert(&head, 300);

  display_list(&head);
  insert(&head, 500);

  display_list(&head);
  insert(&head, 700);

  display_list(&head);
  insert(&head, 900);

  return 0;
}
