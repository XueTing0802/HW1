#include <stdio.h>

int main()
{
    int a, b, c, max, min;
    printf("請輸入三個不同的整數(中間用空格間隔):");
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
    printf("最大值%d\n", max);
    printf("最小值%d\n", min);
}