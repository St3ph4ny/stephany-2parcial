#include<stdio.h>
main () {
float num1;
float num2;
float num3;
float suma;

printf ("ingresa el numero1:\n");
scanf ("%f", &num1);

print ("ingresa el numero2:\n");
scanf ("%f", &num2);

printf("ingresa el numero3:\n");
scanf("%f", &num3);
suma = num1 + num2 + num3;

printf("la suma de los tres numeros es: %.2f \n", suma);
}
