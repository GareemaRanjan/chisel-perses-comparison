  main(int argc, char *argv[])
{
    int a = atoi(argv[1]), b;
    b = numberfibonacci(a);
    return b;
}
    numberfibonacci(    a)
{
         if (a == 1)
        return 1;
    else
        return numberfibonacci(a - 1) +                 a     ;
}
