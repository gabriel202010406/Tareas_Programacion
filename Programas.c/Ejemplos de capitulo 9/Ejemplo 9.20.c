# incluir  < stdio.h >
/* Escuela.
El programa, al recibir como dato un archivo de acceso directo que contiene
información de los alumnos de una escuela, genera información estadística importante. */
typedef  struct  /* Declaración de la estructura matcal. */
{
    materia char [ 20 ];
    calificación int ;
} mateal;
typedef  struct  /* Declaración de la estructura alumno. */
{
    matrícula int ;
    char nombre[ 20 ];
    matecal cal[ 5 ];
    /* Observe que un campo de esta estructura es a su vez estructura. */
} alumno;
vacío  F1 (ARCHIVO *);
vacío  F2 (ARCHIVO *); /* Prototipos de funciones. */
flotar F3FILE *);
vacío  principal ( vacío )
{
    flotador pro;
    ARCHIVO *ap;
    if ((ap = fopen ( " esc.dat " , " r " )) != NULL )
    {
        F1 (ap);
        F2 (ap);
        pro = F3 (ap);
        printf ( " \n\n PROMEDIO GENERAL MATERIA 4: %f " ,pro);
    }
    más
        printf ( " \n El archivo no se puede abrir " );
    cerrar (ap);
}
vacío  F1 (ARCHIVO *ap)
/* La función escribe la matrícula y el promedio general de cada alumno. */
{
    alumno alu;
    intj ;
    suma flotante , pro;
    printf ( " \n MATRICULA y PROMEDIOS " );
    fread (&alu, tamaño de (alumno), 1 , ap);
    mientras (! feof (ap))
    {
        printf ( " \n Matricula: %d " , alu. matricula );
        suma = 0.0 ;
        para (j= 0 ; j< 5 ; j++)
            suma += alu. cal [j]. calificacion ;
        pro = suma / 5 ;
        printf ( " \t Promedio: %f " , pro);
        fread (&alu, tamaño de (alumno), 1 , ap);
    }
}
vacío  F2 (ARCHIVO *ap)
/* La función escribe la matrícula de los alumnos cuya calificación en la
tercera materia es mayor a 9. */
{
    alumno alu;
    intj ;
    rebobinar (ap);
    printf ( " \n\n ALUMNOS CON CALIFICACION > 9 EN MATERIA 3 " );
    fread (&alu, tamaño de (alumno), 1 , ap);
    mientras (! feof (ap))
    {
        si (alu. cal [ 2 ]. calificacion > 9 )
            printf ( " \n Matricula del alumno: %d " , alu. matricula );
        fread (&alu, tamaño de (alumno), 1 , ap);
    }
}
flotante  F3 (ARCHIVO *ap)
/* Esta función obtiene el promedio general de la materia 4. */
{
    alumno alu;
    int i = 0 ;
    suma flotante = 0 , favorable;
    rebobinar (ap);
    fread (&alu, tamaño de (alumno), 1 , ap);
    mientras (! feof (ap))
    {
        yo++;
        suma += alu. cal [ 3 ]. calificacion ;
        fread (&alu, tamaño de (alumno), 1 , ap);
    }
    pro = ( flotante ) suma / i;
    volver (pro);
}
