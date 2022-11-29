int printf(const char*, ...);
int main()
{
    int a[10], i;
    int numbers[10];
    int l=10;
    for(int i = 0; i <= l; i++){
    numbers[i] = i;
    }

    for( int i=0; i<=l; i++){
        int a[10];
        int n=numbers[i];
        // printf("number %d\n", n);
        int j;
        for (j = 0; n > 0; j++)
    {
        a[j] = n % 2;
        n = n / 2;
        
    }
    for (j = j - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
    printf("\n");
    }
    return 0;
}
