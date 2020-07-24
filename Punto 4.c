/* 4. Escribir un programa en C que simule una calculadora simple. 
Que lea dos números y un carácter.
Si el carácter es un +, se imprime la suma; si es un -, se imprime la diferencia; si es un *, se imprime el producto; si es un /, se imprime la división. Además, que no permita dividir por cero.
Que permita seguir usando la calculadora hasta que el usuario decida finalizar.*/
#include<stdio.h>
main(){
	float n1, n2;
	char op;
	int salir;
	
	for(;;){
			printf("\nIngrese el primer numero: ");
			scanf("%g", &n1);
			printf("\nIngrese el segundo numero: ");
			scanf("%g", &n2);
			printf("\nSeleccione la operacion a realizar: \n");
			printf("\t' + ' para SUMA\n");
			printf("\t' - ' para RESTA\n");
			printf("\t' * ' para MULTIPLICACION\n");
			printf("\t' + ' para DIVISION\n");
			printf("\tPresiona cualquier otra tecla para salir. \n");
			printf("Opcion elegida: ");
			scanf("%s", &op);
			
			switch(op){
				case '+': printf("\nLa suma entre %g y %g es %g\n\n", n1, n2, n1+n2); break;
				case '-': printf("\nLa resta entre %g y %g es %g\n\n", n1, n2, n1-n2); break;
				case '*': printf("\nLa multiplicacion entre %g y %g es %g\n\n", n1, n2, n1*n2); break;
				case '/': if (n2 == 0){
					printf("No se permite dividir por 0\n");
					break;
				}else 
				printf("\nLa division entre %g y %g es %g\n\n", n1, n2, n1/n2); break;
				}	
			printf("Presiona 1 para seguir.\nPresiona 2 para salir.\n Eleccion: ");
			scanf("%d", &salir);
			if(salir == 2){
				printf("\nGracias por utilizar el programa :D");
				break;
			}
	}
}
