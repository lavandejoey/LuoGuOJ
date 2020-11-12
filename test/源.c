#include <stdio.h>

void main()
{
    int i;
    float array[5] = { 11, 2, 13, 14, 15 };
    for (i = 0; i < 5; i++)
        printf("%20+.1f", array[i]);
}