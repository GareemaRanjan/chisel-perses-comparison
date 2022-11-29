
int main()
{

    int numbers[10];
    int l=10;
    for(int i = 0; i <= l; i++){
    numbers[i] = i;
    }

    for( int i=0; i<=l; i++){
        int a[10];
        int n=numbers[i];

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

    }


}

