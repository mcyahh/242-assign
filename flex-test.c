#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "flexarray.h"

int main(void) {
  char c;
  char *s;
  flexarray f = flexarray_new();

  while (2 == scanf(" %c %s", &c, &s)) {
    if (c == 'i') {
      flexarray_append(f, &s);
    }

    if (c == 'p') {
      flexarray_print(f);
    }

    if (c == 's') {
      flexarray_sort(f);
    }
  }

  flexarray_free(f);

  return EXIT_SUCCESS;
}

