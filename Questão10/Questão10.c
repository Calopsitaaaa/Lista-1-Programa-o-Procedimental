#include <stdio.h>
#include <stdlib.h>

int main()
{   float km,ms;
    printf("digite a velocidade em km\n");
    scanf("%g",&ms);
    km=ms/3.6;
    printf("equivale %g ms",km,ms);
    return 0;
}
