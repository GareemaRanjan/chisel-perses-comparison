#include <stdio.h>
#include <stdlib.h>

int compare(char a[], char b[])
{
    int flag = 0, i = 0;                 // integer variables declaration
    while (a[i] != '\0' && b[i] != '\0') // while loop
    {
        if (a[i] != b[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
        return 0;
    else
        return 1;
}

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("Enter a string!!\n");
        return 0;
    }
    char *org = argv[1];
    char *acData = argv[1], Temp = 0;
    int iLoop = 0, iLen = 0;
    while (acData[iLen++] != '\0')
        ;
    //Remove the null character
    iLen--;

    iLen--;
    while (iLoop < iLen)
    {
        Temp = acData[iLoop];
        acData[iLoop] = acData[iLen];
        acData[iLen] = Temp;
        iLoop++;
        iLen--;
    }

    int res = compare(org, acData);
    if (res == 0)
    {
        printf("Palindrome\n");
    }
    printf("\n\nReverse string is : %s\n\n", acData);
    return 0;
}
