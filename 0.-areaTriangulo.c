#include<stdio.h>
main () {
float altura;
float base;
float area;

printf ("Ingresa el valor de la altura:\n");
scanf ("%f", &altura);

printf("ingresa el valor de la base:\n");
scanf("%f", &base);

area = (base * altura) / 2;

printf("el area del triangulo es: %.2f \n", area);
}
