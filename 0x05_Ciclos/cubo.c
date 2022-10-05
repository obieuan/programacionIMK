#include <stdio.h>
#include "main.h"

char cubo(int a)
{
    int r = 0;
    for(int i=1;i<=a;i++)
    {
        r++;
        printf("El cubo de %d es: %d\n", i, i*i*i );
    }
    return('b');
}
