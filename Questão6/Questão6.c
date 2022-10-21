//06. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
//formula de conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a
//temperatura em Celsius.

#include <stdio.h>
#include <stdlib.h>
main (){
float c, f;
printf("digite a temperatuda em Celsius para converter:");
scanf ("%g", &c);
f = (c * (9.0/5.0)) + 32.0;
printf ("Celsius Em Fahrenheit:%g\n", f);
system ("pause");
return 0;
}
