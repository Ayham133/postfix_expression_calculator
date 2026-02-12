#include "number_parser.h"
#include <math.h>
#include <stdbool.h>

bool is_digit(char number) { return number <= '9' && number >= '0'; }

int str_to_digit(char number[], int *index) {

  int result = 0;
  while (number[*index] != ' ' && number[*index] != '\0') {

    int pow_factor = 1;
    if (is_digit(number[*index])) {
      result += number[*index] - '0';
      result *= pow(FACTOR, pow_factor++);
    }

    *index += 1;
  }

  return result / FACTOR;
}
