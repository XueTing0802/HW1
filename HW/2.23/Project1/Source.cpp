#include <stdio.h>

int main()
{
    int a, b, c, max, min;
    printf("�п�J�T�Ӥ��P�����(�����ΪŮ涡�j):");
    scanf_s("%d %d %d", &a, &b, &c);

    if (b > a && b > c)
    {
        max = b;
        if (a > c)
            min = c;
        else if (c > a)
            min = a;
    }
    else if (a > b && a > c)
    {
        max = a;
        if (b > c)
            min = c;
        else if (c > b)
            min = b;
    }
    else if (c > b && c > a)
    {
        max = c;
        if (b > a)
            min = a;
        else if (a > b)
            min = b;
    }
    printf("�̤j��%d\n", max);
    printf("�̤p��%d\n", min);
}