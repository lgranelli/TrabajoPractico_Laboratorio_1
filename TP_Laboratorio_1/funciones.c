#include "funciones.h"

void Menu(float operandoIngresadoUno, float operandoIngresadoDos)
{
    printf("1. Ingresar 1er operando (%.2f) \n",operandoIngresadoUno);
    printf("2. Ingresar 2do operando (%.2f) \n",operandoIngresadoDos);
    printf("3- Calcular todas las operaciones \n");
    printf("4- Informar resultados \n");
    printf("5- Salir \n\n");
}

float cargarNumeros(float numeros)
{
    printf("\n  - Escoja un numero: ");
    fflush(stdin);
    scanf("%f", &numeros);
    printf("\n");
    return numeros;
}
long int calcularFactorial(long int numero)
{

    long int resultado;
    if(numero==0)
    {
        resultado=1;
    }
    else
    {
        resultado=numero*calcularFactorial(numero - 1);
    }
    return resultado;
}
float funcionSumar(float numero, float acum)
{
    float suma;
    suma=numero+acum;
    return suma;
}
float funcionRestar(float numero, float acum)
{
    float resta;
    resta=numero-acum;
    return resta;
}

float funcionMultiplicar(float numero,float acum)
{
    long int numeroMultiplicado;
    numeroMultiplicado= numero*acum;
    return numeroMultiplicado;
}
float funcionDividir(float numero, float divisor)
{
    float division;
    division=numero/divisor;
    return division;
}
