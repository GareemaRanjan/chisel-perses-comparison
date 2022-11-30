




















int main(int argc, char *argv[])
{






    char *acData = argv[1], Temp = 0;
    int iLoop = 0, iLen = 0;
    while (acData[iLen++] != '\0')
        ;

    iLen--;

    iLen--;


        Temp = acData[iLoop];
        acData[iLoop] = acData[iLen];
        acData[iLen] = Temp;









    printf("\n\nReverse string is : %s\n\n", acData);

}
