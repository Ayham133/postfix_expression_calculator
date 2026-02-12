#include "number_parser.h"
#include "stack.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 50

int exe_postfix(char str[MAX_LENGTH]);

int main(void) {
  char str[MAX_LENGTH] = "13 2 4 * +";
  int result = exe_postfix(str);
  printf("result: %d\n", result);
  return 0;
}

int exe_postfix(char str[MAX_LENGTH]) {
  Stack stack;
  initialize_stack(&stack);

  int i = 0;
  while (str[i] != '\0') {

    if (str[i] == ' ') {
      i++;
      continue;
    }

    if (is_digit(str[i])) {

      int number = str_to_digit(str, &i);
      // printf("number at index %d is : %d", i, number);
      push(&stack, number);

    } else {
      int number1 = pop(&stack), number2 = pop(&stack);
      switch (str[i]) {
      case '+': {
        push(&stack, number2 + number1);
        break;
      }

      case '-': {
        push(&stack, number2 - number1);
        break;
      }

      case '*': {
        push(&stack, number1 * number2);
        break;
      }

      case '/': {
        if (number1 != 0)
          push(&stack, number2 / number1);
        else {
          printf("Math Error!!\n");
          exit(-1);
        }
        break;
      }
      default: {
        printf("Invalid Operator!!\n");
        break;
      }
      }
    }

    i++;
  }

  return pop(&stack);
}
