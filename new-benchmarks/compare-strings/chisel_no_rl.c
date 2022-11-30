#include <stdio.h>

int main(int argc, char *argv[]) {
  int count1 = 0, count2 = 0, flag = 0, i;
  char *string1 = argv[1], *string2 = argv[2];

  i = 0;

  if (string1[i] > string2[i])
    printf("First string is greater than Second string\n");
  else

    printf("Both strings are EQUAL\n");
  return 0;
}
