#include <stdlib.h>
#include <string.h>
#include "main.h"

int count_words(char *str) {
  int count = 0;
  int is_word = 0;

  while (*str) {
    if (*str == ' ' || *str == '\t' || *str == '\n') {
      is_word = 0;
    } else if (is_word == 0) {
      is_word = 1;
      count++;
    }
    str++;
  }

  return count;
}

void free_words(char **words, int num_words) {
  for (int i = 0; i < num_words; i++) {
    free(words[i]);
  }
  free(words);
}

char **strtow(char *str) {
  if (str == NULL || *str == '\0') {
    return NULL;
  }

  int num_words = count_words(str);
  char **words = (char **)malloc((num_words + 1) * sizeof(char *));

  if (words == NULL) {
    return NULL;
  }

  int word_index = 0;
  int word_length = 0;

  while (*str) {
    if (*str == ' ' || *str == '\t' || *str == '\n') {
      if (word_length > 0) {
	words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));

	if (words[word_index] == NULL) {
	  free_words(words, word_index);
	  return NULL;
	}

	strncpy(words[word_index], str - word_length, word_length);
	words[word_index][word_length] = '\0';

	word_index++;
	word_length = 0;
      }
    } else {
      word_length++;
    }

    str++;
  }

  if (word_length > 0) {
    words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));

    if (words[word_index] == NULL) {
      free_words(words, word_index);
      return NULL;
    }

    strncpy(words[word_index], str - word_length, word_length);
    words[word_index][word_length] = '\0';
    word_index++;
  }

  words[word_index] = NULL;

  return words;
}
