/*
 * C program to accept an array of 10 elements and swap 3rd element
 * with 4th element using pointers and display the results.
 */

int printf(const char *, ...);
void swap34(int *ptr1, int *ptr2);
int main() {

  int x[10], sum = 0;
  int i, n = 5;

  // printf("How many Elements...\n");
  // scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    x[i] = i;
  }

  /*  Function call:Interchanging 3rd element by 4th */

  for (i = 1; i <= n; i++) {

    sum += x[i];
  }

  return sum;
}

/*  Function to swap the 3rd element with the 4th element in the array */
