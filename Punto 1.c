/* 1. Hacer un programa en C que solicite la inicial de su apellido. 
Que solicite el ingreso de una edad y un n�mero de mes. Que muestre por consola si la inicial del apellido ingresado es correcta. 
De acuerdo a la edad ingresada que indique si es menor de edad, mayor de edad o deber�a jubilarse. 
Y de acuerdo al n�mero de mes ingresado que muestre a que estaci�n del a�o corresponde. (Par�metros: de 1 a 17 a�os, de 18 a 59, 60 a�os en adelante). */ 

#include <stdio.h>
main()
{
   char ap;
   int edad, mes;
   
   printf("Ingrese la incial del apellido en mayuscula: ");
   scanf("%s", &ap);
   for(;;){
   		if (ap == 'A' || ap == 'B' || ap == 'C' || ap == 'D' || ap == 'E' || ap == 'F' || ap == 'G' || ap == 'H' || ap == 'I' || ap == 'J' || ap == 'K' || ap == 'L' || ap == 'M' || ap == 'N' || ap == '�' || ap == 'O' || ap == 'P' || ap == 'Q' || ap == 'R' || ap == 'S' || ap == 'T' || ap == 'U' || ap == 'V' || ap == 'W' || ap == 'X' || ap == 'Y' || ap == 'Z' ){
   			printf("Ingrese la edad: ");
  			scanf("%i", &edad);
 		 	printf("Ingrese un numero de mes: ");
 		 	scanf("%i", &mes);
   		} else
   		 	printf("Error en la inicial del apellido."); break;
   }
   
   if (edad > 1 && edad <= 17){
   	printf("Corresponde a un menor de edad.\n");
   }if (edad >= 18 && edad <= 59){
   	printf("Corresponde a un mayor de edad.\n");
   }if (edad >= 60){
   	printf("Debe jubilarse\n");
   }if (mes >= 1 && mes <= 3){
   	printf("Corresponde a verano\n");
   }if (mes >= 4 && mes <= 6){
   	printf("Corresponde a oto%co\n", 164);
   }if (mes >= 7 && mes <= 9){
   	printf("Corresponde a Invierno\n");
   }if (mes >= 10 && mes <= 12){
   	printf("Corresponde a primavera\n");
   }if (mes >= 13){
   	printf("Error en el mes ingresado. \n");
   }
}
 
