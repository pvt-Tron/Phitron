#include <stdio.h>
#include <string.h>

int main() {

  char text[] = "C programiz is interesting.";
  char ch = 'e';

    // variable to store the occurrence (Programiz [PRO])
  int frequency = 0;

  // access each character 
  for (int i = 0; i < strlen(text); ++i) {

    // compare each character with the given character
    // if match found, increase frequency
    if (ch == text[i]) {
      ++frequency;
      printf("\nPosition: %d\n",i);
    }
  }

  printf("\nFrequency: %d", frequency);    // 2

  return 0;
}