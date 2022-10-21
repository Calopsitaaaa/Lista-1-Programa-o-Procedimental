//05. Leia um número real e imprima a quinta parte deste número.
#include <stdio.h>
#include <stdlib.h>

int main()
{   float num,quin;
    printf("digite um numero:\n");
    scanf("%g",&num);
    quin=num/5;
    printf("\nQuinta parte do numero e:\n%g",quin);

    return 0;
}
