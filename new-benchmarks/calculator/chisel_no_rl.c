int printf(const char *p, ...);
int scanf(const char *restrict, ...);
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *op = argv[2];
  int first = atoi(argv[1]);
  int second = atoi(argv[3]);
  // printf("%s ", op);
  switch (*op) {

  case '+':
    printf("%d + %d = %d\n", first, second, first + second);
    break;
  }

  return 0;
}
