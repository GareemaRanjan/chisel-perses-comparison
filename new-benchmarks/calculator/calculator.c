int printf(const char *p, ...);
int scanf(const char *restrict, ...);
int main()
{
    char op = '+';
    int first = 3;
    int second = 3;
    switch (op)
    {
    case '-':
        printf("%d - %d = %d\n", first, second, first - second);
        break;
    case '+':
        printf("%d + %d = %d\n", first, second, first + second);
        break;
    case '*':
        printf("%d * %d = %d\n", first, second, first * second);
        break;
    case '/':
        printf("%d / %d = %d\n", first, second, first / second);
        break;
    // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
