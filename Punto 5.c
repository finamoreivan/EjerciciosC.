/* 5. En un salón se desea cargar las notas de 14 alumnos; 
de los cuales se desea saber cuál fue el promedio de todas las notas, cual fue la nota mayor y la nota menor. 
Así como la cantidad de aprobados en el curso (Para Aprobar la asignatura se requiere de una nota mayor o igual a 7). */

#include<stdio.h>
main(){
	int alum, i, cant=0;
	float prom, total, mayor = 0, menor = 9999; 
	
	for(i = 1; i<=14; i++){
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
	printf("La cantidad de aprobados fueron: %i", cant);
}
