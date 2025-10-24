#include<stdio.h>
main () {
float promUno;
float promDos;
float promTres;
float promedio;

printf ("ingresa el promedioUno:\n");
scanf ("%f", &promUno);

printf ("ingresa el promedioDos:\n");
scanf ("%f", &promDos);

printf ("ingresa el promedioTres:\n");
scanf ("%f", &promTres);

promedio = (promUno + promDos + promTres)/ 3 ;

if( promedio > 6) {
    printf ("Aprobado");
}else {
printf("Reprobado");
}
}
