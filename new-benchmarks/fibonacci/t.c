#include <stdio.h>
#include <stdlib.h>
int numberfibonacci(int);

int main(int argc, char *argv[])

{

   int a = atoi(argv[1]), b;

   // printf("Please enter the value of the n number here : ");

   // scanf("%d", &a);

   b = numberfibonacci(a);

   printf("%d", b);
   return b;
}

int numberfibonacci(int a)

{

   if (a == 0)

   {

       return 0;
   }

   else if (a == 1)

   {

       return 1;
   }

   else

   {

       return numberfibonacci(a - 1) + numberfibonacci(a - 2);
   }
}
