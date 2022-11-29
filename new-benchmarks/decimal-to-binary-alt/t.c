int printf(const char *, ...);

void dec2bin(int n)
{
    int a[10];
    // printf("number %d\n", n);
    int j;

    for (j = 0; n > 0; j++)
    {
        a[j] = n % 2;
        n = n / 2;
        // printf("%d\n", a[j]);
    }
    // printf("%d\n", a[j]);
    // printf("Binary of Given Number is=");
    for (j = j - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
    printf("\n");
}

int main()
{
    int a[10], i;
    int numbers[10];
    int l = 10;
    // for (int i = 0; i <= l; i++)
    // {
    //     numbers[i] = i;
    // }

    // for (int i = 0; i <= l; i++)
    // {

    // int n = numbers[i];
    // printf("number %d\n", n);
    int j;

    dec2bin(1);
    dec2bin(2);
    dec2bin(3);
    dec2bin(4);
    dec2bin(5);
    dec2bin(6);
    dec2bin(7);
    dec2bin(8);
    dec2bin(9);
    dec2bin(10);
    dec2bin(11);
    dec2bin(12);
    dec2bin(13);
    dec2bin(14);
    dec2bin(15);
    dec2bin(16);
    dec2bin(17);
    dec2bin(18);
    dec2bin(19);
    dec2bin(20);
    dec2bin(21);
    dec2bin(22);
    dec2bin(23);
    dec2bin(24);
    dec2bin(25);
    dec2bin(26);
    dec2bin(27);
    dec2bin(28);
    dec2bin(29);
    dec2bin(30);
    dec2bin(31);
    dec2bin(32);
    dec2bin(33);
    dec2bin(34);
    dec2bin(35);
    dec2bin(36);
    dec2bin(37);
    dec2bin(38);
    dec2bin(39);
    dec2bin(40);
    dec2bin(41);
    dec2bin(42);
    dec2bin(43);
    dec2bin(44);
    dec2bin(45);
    dec2bin(46);
    dec2bin(47);
    dec2bin(48);
    dec2bin(49);
    dec2bin(50);
    dec2bin(51);
    dec2bin(52);
    dec2bin(53);
    dec2bin(54);
    dec2bin(55);
    dec2bin(56);
    dec2bin(57);
    dec2bin(58);
    dec2bin(59);
    dec2bin(60);
    dec2bin(61);
    dec2bin(62);
    dec2bin(63);
    dec2bin(64);
    dec2bin(65);
    dec2bin(66);
    dec2bin(67);
    dec2bin(68);
    dec2bin(69);
    dec2bin(70);
    dec2bin(71);
    dec2bin(72);
    dec2bin(73);
    dec2bin(74);
    dec2bin(75);
    dec2bin(76);
    dec2bin(77);
    dec2bin(78);
    dec2bin(79);
    dec2bin(80);
    dec2bin(81);
    dec2bin(82);
    dec2bin(83);
    dec2bin(84);
    dec2bin(85);
    dec2bin(86);
    dec2bin(87);
    dec2bin(88);
    dec2bin(89);
    dec2bin(90);
    dec2bin(91);
    dec2bin(92);
    dec2bin(93);
    dec2bin(94);
    dec2bin(95);
    dec2bin(96);
    dec2bin(97);
    dec2bin(98);
    dec2bin(99);
    dec2bin(100);

    return 0;
}

