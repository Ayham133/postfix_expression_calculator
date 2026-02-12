#include "stack.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void stack_underflow(void) {
  printf("Stack underflow");
  exit(-1);
}

void stack_overflow(void) {
  printf("Stack overflow");
  exit(-1);
}

void initialize_stack(Stack *stack) { stack->top = -1; }

void make_empty(Stack *stack) { stack->top = 0; }

bool is_empty(Stack *stack) { return stack->top == -1; }

bool is_full(Stack *stack) { return stack->top == STACK_SIZE; }

int pop(Stack *stack) {
  if (is_empty(stack))
    stack_underflow();

  int returnedNumber = stack->content[stack->top--];
  stack->number_of_element--;

  return returnedNumber;
}

void push(Stack *stack, int number) {
  if (is_full(stack))
    stack_overflow();

  stack->content[++stack->top] = number;
  stack->number_of_element++;
}

int peek(Stack *stack) {
  if (is_empty(stack))
    stack_underflow();

  return stack->content[stack->top];
}

void free_stack(Stack *stack) { initialize_stack(stack); }
