#include <stdio.h>

int main(void) {
  int i;
  char word[50];
  char reversedWord;
  fgets(word, 50, stdin);
  int wordSize = strlen(word) - 1;
  for (i = wordSize; i >= 0; i--) {
    reversedWord = word[i];
    printf("%c", reversedWord);
  }
  return 0;
}