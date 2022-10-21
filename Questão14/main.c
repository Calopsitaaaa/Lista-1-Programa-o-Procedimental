#include <stdio.h>
#include <stdlib.h>

int main()
{   const pi =3.14;
    float g,r;
    printf("digite o angulo em graus:");
    scanf("%g",&r);
    g=r*pi/180;
    printf("o resultado e %g\n",g);
    return 0;
}
