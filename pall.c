#include"monty.h"

/**
*print_stack-printsthestack
*@stack:stackhead
*@line_number:linenumber(notusedhere)
*Return:Noreturnvalue
*/
voidprint_stack(stack_t**stack,unsignedintline_number)
{
stack_t*current;
(void)line_number;

current=*stack;
if(current==NULL)
return;

while(current)
{
printf("%d\n",current->n);
current=current->next;
}
}
