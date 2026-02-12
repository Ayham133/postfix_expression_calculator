#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define STACK_SIZE 100

typedef struct {
  int content[STACK_SIZE];
  int top;
  int number_of_element;

} Stack;

void stack_underflow(void);

void stack_overflow(void);

void initialize_stack(Stack *stack);

void make_empty(Stack *stack);

bool is_empty(Stack *stack);

bool is_full(Stack *stack);

int pop(Stack *stack);

int peek(Stack *stack);

void push(Stack *stack, int number);

#endif
