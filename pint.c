#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pint_s - prints top of the stack
 * @stack: stack
 */
void pint_s(stack_t **stack)
{
printf("%d\n", (*stack)->n);
}
/**
 * pint_f - prints top of the stack
 * @stack: stack
 * @line_number: line number
 */
void pint_f(stack_t **stack, unsigned int line_number)
{
const char *format = "L%d: can't pint, stack empty";
if((*stack)==NULL)
{
fprintf(stderr, format, line_number);
ext(stack);
}
pint_s(stack);
}
instruction_t pint = {"pint", pint_f};
