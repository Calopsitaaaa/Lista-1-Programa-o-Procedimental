//04. Leia um número real e imprima o resultado do quadrado desse número.
#include <stdio.h>
#include <stdlib.h>
main (){
float x;
printf("Coloque um numero:");
scanf ("%f", &x);
x = x * x;

printf("Valor desse numero ao quadrado:%.0f\n", x);

return 0;
}
