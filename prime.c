#include <stdio.h>

int main() {
  int num, i;
  scanf("%d", &num);
  for (i = 2; i <= num / 2; ++i) {
    if (num % i == 0) {
      printf("%d is not a prime number.\n", num);
      return 0;
    }
  }
  printf("%d is a prime number.\n", num);
  return 0;
}
