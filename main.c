/*
 * This program implements a simple loop through a small linked list, but it
 * is broken.  When you try to compile this file using the provided Makefile,
 * you will see several errors that say something like "incomplete type" or
 * "incomplete definition of type".  This happens because the linked list
 * is implemented in such a way as not to expose its inner implementation
 * details.  In this recitation exercise, you'll explore how to fix this
 * broken loop without exposing the implementation details of the list.
 */

#include <stdio.h>

#include "list.h"

int main()
{
  int i = 0;
  struct list *list = list_setup();
  int curr = iterateList(list, i);
  //struct link *curr = list->head; /* This line generates a compiler error. */

  while (curr != -1)
  {
    /*
     * The next two lines each generate a compiler error.
     */
    curr = iterateList(list, i);
    printf("== list[%2d]: %d\n", i, curr);
    //curr = curr->next;
    i++;
  }

  return 0;
}
