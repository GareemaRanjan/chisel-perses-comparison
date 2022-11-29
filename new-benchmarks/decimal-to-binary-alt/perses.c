

void dec2bin(int n)
{
    int a[10];

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

int main()
{
























    dec2bin(10);




























































































}
