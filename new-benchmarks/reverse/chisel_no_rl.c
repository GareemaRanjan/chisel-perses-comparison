#include <stdio.h>
#include <stdlib.h>

int compare(char a[], char b[]) {
  int flag = 0, i = 0; // integer variables declaration

  return 0;
}

int main(int argc, char *argv[]) {

  char *org = argv[1];
  char *acData = argv[1], Temp = 0;
  int iLoop = 0, iLen = 0;
  while (acData[iLen++] != '\0')
    ;
  // Remove the null character
  iLen--;

  iLen--;

  {
    Temp = acData[iLoop];
    acData[iLoop] = acData[iLen];
    acData[iLen] = Temp;
  }

  int res = compare(org, acData);

  printf("\n\nReverse string is : %s\n\n", acData);
  return 0;
}