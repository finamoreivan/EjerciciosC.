/* 2. Escribir un programa en Lenguaje C que solicite el ingreso de dos números
 y que permita seleccionar si se sumarán, restarán, dividirán, multiplicarán, calculará el resto de la división, la potencia y la raíz cuadrada de un número.
 Que muestre el resultado exacto por pantalla. Se permitirá seguir realizando las operaciones hasta que el usuario decida salir del programa. */
#include<stdio.h>
#include<math.h>
main(){
	int n1, n2, i, op, raiz1=0, raiz2=0;

	
	for(;;){
			printf("Ingrese el primer numero: ");
			scanf("%i", &n1);
	
			printf("Ingrese el segundo numero: ");
			scanf("%i", &n2);
	
			printf("Seleccione que operacion realizar\n");
			printf("\t1 - SUMA\n");
			printf("\t2 - RESTA\n");
			printf("\t3 - DIVISION\n");
			printf("\t4 - MULTIPLICACION\n");
			printf("\t5 - RESTO DE LA DIVISION\n");
			printf("\t6 - POTENCIA\n");
			printf("\t7 - RAIZ CUADRADA DE AMBOS\n");
			printf("\tPulsa cualquier otra tecla para salir del programa.\n");
			printf("Operacion elegida: ");
			scanf("%d", &op);
	
			switch (op){
				case 1: printf("La suma entre %i y %i es: %i\n", n1, n2, n1+n2); break;
				case 2: printf("La resta entre %i y %i es: %i\n", n1, n2, n1-n2); break;
				case 3: printf("La division entre %i y %i es: %i\n", n1, n2, n1/n2); break;
				case 4: printf("La multiplicacion entre %i y %i es: %i\n", n1, n2, n1*n2); break;
				case 5: printf("El resto de la division entre %i y %i es: %i\n", n1, n2, n1%n2); break;
				case 6: printf("La potencia a la %i de %i es: %i\n", n2, n1, pow(n1, n2)); break;
				case 7: raiz1 = sqrt(n1); raiz2 = sqrt(n2); printf("La raiz cuadrada de %i es: %i y la de %i es: %i\n", n1, raiz1, n2, raiz2); break;
				default: break;
				}
			if (op < 1 || op > 7){
				printf("\nGracias por utilizar el programa :D");
				break;
			}
	}

}
