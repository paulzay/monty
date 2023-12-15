#include "monty.h"
/**
 * main - entry point
*/
int main(int argc, char *argv[])
{

  stack_t *head;

  head = NULL;
  add_dnodeint_end(&head, 0);
  add_dnodeint_end(&head, 1);
  add_dnodeint_end(&head, 2);
  add_dnodeint_end(&head, 3);
  add_dnodeint_end(&head, 4);
  add_dnodeint_end(&head, 98);
  add_dnodeint_end(&head, 402);
  add_dnodeint_end(&head, 1024);
  print_stack(head);
  printf("-----------------\n");
  add_dnodeint(&head, 3000);
  print_stack(head);
  return EXIT_SUCCESS;
}
