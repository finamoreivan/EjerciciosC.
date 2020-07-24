/* 3. Hacer un programa en C que solicite al usuario que ingrese una fecha y calcule el día correspondiente del año. 
Ejemplo, si se ingresa la fecha 31-12-1998, el número que se visualizará será 365. */
#include<stdio.h>
main(){
	int dia, mes, A;
	
	printf("Ingrese el dia: ");
	scanf("%i", &dia);
	printf("Ingrese el numero del mes: ");
	scanf("%i", &mes);
	printf("Ingrese el a%co: ", 164);
	scanf("%i", &A);
	
	if (mes == 1){
		printf("\nLa fecha corresponde al dia %i del a%co", dia, 164);
	}else if (mes == 2){
		printf("\nLa fecha corresponde al dia %i del a%co", dia+31, 164);
	}else if (mes == 3){
		printf("\nLa fecha corresponde al dia %i del a%co", dia+59, 164);
	}else if (mes == 4){
		printf("\nLa fecha corresponde al dia %i del a%co", dia+90, 164);
	}else if (mes == 5){
		printf("\nLa fecha corresponde al dia %i del a%co", dia+120, 164);
	}else if (mes == 6){
		printf("\nLa fecha corresponde al dia %i del a%co", dia+151, 164);
	}else if(mes == 7){
		printf("\nLa fecha corresponde al dia %i del a%co", dia+181, 164);
	}else if (mes == 8){
		printf("\nLa fecha corresponde al dia %i del a%co", dia+212, 164);
	}else if (mes == 9){
		printf("\nLa fecha corresponde al dia %i del a%co", dia+243, 164);
	}else if (mes == 10){
		printf("\nLa fecha corresponde al dia %i del a%co", dia+274, 164);
	}else if (mes == 11){
		printf("\nLa fecha corresponde al dia %i del a%co", dia+304, 164);
	}else if (mes == 12){
		printf("\nLa fecha corresponde al dia %i del a%co", dia+334, 164);
	}else 
	printf("\nHay un error en la fecha ingresada.");
}
