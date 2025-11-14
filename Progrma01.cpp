#include<stdio.h>
//Stephany Danae Perez Retana
//Calcula e imprime la suma de 3 numeros.

main () {
//Declaro variables
float var1;
float var2;
float var3;
float suma;

//Imprimo mensaje en la pantalla
printf ("Ingresa el valor del numero 1:\n");

//Guardo el valor ingresado en la variable
scanf ("%f", &var1);

printf ("Ingresa el valor del numero 2:\n");
scanf ("%f", &var2);

printf ("Ingresa el valor del numero 3:\n");
scanf ("%f", &var3);


//Realizo la suma
suma = (var1 + var2 + var3);

printf("La suma de los 3 numeros es: %.2f \n", suma);
}
