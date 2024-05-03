#include <stdio.h>
#include <string.h>

int contains(char c, char domain[]) {
  for (int i = 0; i < strlen(domain); i++) {
    if (c == domain[i]) {
      return 1;
    }
  }
  return 0;
}

int main() {
  char vowels[] = "aeiouAEIOU";
  char numbers[] = "1234567890";

  printf("Enter the value : ");
  char str[100];
  gets(str);
  int size = strlen(str);
  int n_num = 0, n_vowels = 0, n_const = 0;
  for (int i = 0; i < size; i++) {
    if (str[i] != ' ') {
      if (contains(str[i], vowels)) {
        n_vowels++;
      } else if (contains(str[i], numbers)) {
        n_num++;
      } else {
        n_const++;
      }
    }
  }

  printf("There is %d vowels, %d numbers and %d constanants\n", n_vowels, n_num,
         n_const - 1); // minus one because of \0 in the end
}
