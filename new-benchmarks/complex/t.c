int printf(const char*, ...);

int main (int argc, char *argv[]) {
int a = 1;
int b = a + 1;
printf("%d\n", b);
printf("hello\n");
printf("world\n");

a = 2;
b = a + 1;
printf("%d\n", b);
printf("hello\n");


int c = 0;
for (a=0; a<10; a++) {
b++;
printf("%d\n", b);
c -= b * a;
}

printf("%d\n", c);


return 0;
}

