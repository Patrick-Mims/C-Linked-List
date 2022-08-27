#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(void)
{
  List head = new_node();

  insert(&head);

  return 0;
}
