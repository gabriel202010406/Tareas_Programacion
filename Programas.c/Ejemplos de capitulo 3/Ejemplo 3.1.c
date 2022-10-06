#include <studio.h>

/*Nomina.
el porgrama, al recibir los salarios de 15 profesores,
obtiene el total de la nomina de la universidad. 

I:variable de tipo entero. 
Sal y NOM: variable de tipo real .*/

void main(void)
{
	int ;
	float sal, NOM;
	NOM = 0;
	for (I=1 ; I<=15; I++)
	{
		printf ('\Ingrese el salario del profesor%d:\t" , I);
		scanf("%f",&SAL);
		NOM = NOM + SAL ;
	}
	printd("\nEl total de la nomina es: %.2f", NOM);
}
