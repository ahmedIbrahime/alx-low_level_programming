#include <stdlib.h>
#include <string.h>
#include "main.h"

char *argstostr(int ac, char **av) {
  if (ac == 0 || av == NULL) {
    return NULL;
  }

  int total_length = 0;
  for (int i = 0; i < ac; ++i) {
    total_length += strlen(av[i]) + 1;
  }

  char *result = (char *)malloc((total_length + 1) * sizeof(char));

  if (result == NULL) {
    return NULL;
  }

  int current_index = 0;
  for (int i = 0; i < ac; ++i) {
    strcpy(result + current_index, av[i]);
    current_index += strlen(av[i]);
    result[current_index] = '\n';
    ++current_index;
  }

  result[current_index] = '\0';

  return result;
}
