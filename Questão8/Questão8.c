#include <stdio.h>
#include <stdlib.h>

int main()
{   float k,ce;
    int c =167;
    printf("digite uma temperatura em K:\n");
    scanf("%f",&ce);
    k=ce-273,15;
    printf("%3.f% cK equivale a % 3.f% cC",k,c,ce,c);

    return 0;
}
