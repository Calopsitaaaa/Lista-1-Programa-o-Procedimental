//
#include<stdio.h>
#include<stdlib.h>
int a,b,c,result;

int main()
{
   printf("digite o primeiro numero inteiro:\n");
   scanf("%d",&a);
   printf("digite o segundo numero inteiro:\n");
   scanf("%d",&b);
   printf("digite o terceiro numero inteiro:\n");
   scanf("%d",&c);
   result = a + b + c;
   printf("%d\n\n",result);
   printf("A soma dos tres numeros inteiros e: %d\n\n",result);

return 0;
}
