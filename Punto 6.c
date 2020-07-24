/*6. Se desea confeccionar un menú donde tenga la opción de elegir si se desea compilar uno de los dos ejercicios elegidos anteriormente. 
Que el programa permita seguir seleccionando y compilando cualquiera de los dos ejercicios hasta que el usuario decida salir del programa. */

#include<stdio.h>
main(){
	int alum, i, cant=0, edad=0, mes=0, E;
	float prom, total, mayor = 0, menor = 9999; 
	char ap;
	
	for(;;){
	printf("Seleccione que ejercicio realizar\n\n");
	printf("1 para el 1\n2 para el 5\n3 para salir\n");
	printf("Eleccion: ");
	scanf("%d", &E);
	
	switch (E){
		case 1: printf("Ingrese la incial del apellido en mayuscula: ");
  				scanf("%s", &ap);
  				for(;;){
   				if (ap >= 'A' && ap <= 'Z' ){
   				printf("Ingrese la edad: ");
  				scanf("%i", &edad);
 		 		printf("Ingrese un numero de mes: ");
 		 		scanf("%i", &mes);
   				} else
   			 	printf("Error en la inicial del apellido.\n"); break;
  				}
   
   				if (edad > 1 && edad <= 17){
   				printf("Corresponde a un menor de edad.\n");
   				}else if (edad >= 18 && edad <= 59){
  			 	printf("Corresponde a un mayor de edad.\n");
 				}else if (edad >= 60){
 			  	printf("Debe jubilarse\n");
  				}else if (edad <= 0){
 			  	printf("Error en la edad.\n");
				}if (mes >= 1 && mes <= 3){
   				printf("Corresponde a verano\n");
 				}else if (mes >= 4 && mes <= 6){
  			 	printf("Corresponde a oto%co\n", 164);
   				}else if (mes >= 7 && mes <= 9){
   				printf("Corresponde a Invierno\n");
   				}else if (mes >= 10 && mes <= 12){
   				printf("Corresponde a primavera\n");
   				}if (mes >= 13 || mes <= 0){
   				printf("Error en el mes. \n");
   				}; break;
   		case 2: for(i = 1; i<=14; i++){
				printf("Ingrese el promedio del alumno %i: ", i);
				scanf("%g", &prom);
				
				total = total + prom;
		
				if (prom >= 7){
				cant++;
				}
		
				if(prom>mayor){
				mayor=prom;
				}
				if(prom<menor){
				menor=prom;
				}
				}
				printf("El promedio de todas las notas fue: %g\n", total/14);
				printf("La mayor nota fue: %g\n", mayor);
				printf("La menor nota fue: %g\n", menor);
				printf("La cantidad de aprobados fueron: %i", cant); break;
		case 3: printf("Gracias por utilizar el programa :)"); break;
		default : printf("Error en el dato ingresado.\n");
		}
		
		if(E == 3){
			break;
		}
	}
}
