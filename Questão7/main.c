#include <stdio.h>
#include <stdlib.h>
main (){
float c, f;
printf("digite a temperatuda em Fahrenheit para converter:");
scanf ("%g", &f);
c = 5.0*(f- 32.0)/9.0;
printf ("Fahrenheit em Celsius:%g\n", c);
system ("pause");
return 0;
}
