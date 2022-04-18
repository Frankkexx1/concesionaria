#include <sys/types.h>
#include <stdio.h>
int main()
{
//Variables
pid_t id_proceso;
pid_t id_padre;
//Indicar proposito del programa
puts("\n==== ESTE PROGRAMA MUESTRA EL IDENTIFICADOR DE PROCESO
DE UN PROCESO Y DE SU PROCESO PADRE ====\n");
//Procesar
id_proceso = getpid();
id_padre = getppid();