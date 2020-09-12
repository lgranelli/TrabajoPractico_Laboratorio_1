#include "funciones.h"




int main()
{

    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    long int resultadoFactorialUno;
    long int resultadoFactorialDos;
    float operandoIngresadoUno;
    float operandoIngresadoDos;
    int opcion;



    do {
        Menu(operandoIngresadoUno, operandoIngresadoDos);
        printf("  - Seleccione una opcion: ");
        scanf("%i", &opcion);

        switch(opcion)
        {

        case 1:
            operandoIngresadoUno=cargarNumeros(operandoIngresadoUno);
            break;
        case 2:
            operandoIngresadoDos=cargarNumeros(operandoIngresadoDos);
            break;
        case 3:
            if(operandoIngresadoUno==0)
            {

                printf("No se puede Calcular sin haber cargado los datos\n");
            }
            else
            {
                printf("\t\tLas operaciones se han realizado con éxito!\n \t\tIngrese la opción 4 para ver los resultados\n\n\n");
                resultadoSuma=funcionSumar(operandoIngresadoUno,operandoIngresadoDos);
                resultadoResta=funcionRestar(operandoIngresadoUno,operandoIngresadoDos);
                resultadoMultiplicacion=funcionMultiplicar(operandoIngresadoUno,operandoIngresadoDos);
                resultadoDivision=funcionDividir(operandoIngresadoUno,operandoIngresadoDos);
                resultadoFactorialUno=calcularFactorial(operandoIngresadoUno);
                resultadoFactorialDos=calcularFactorial(operandoIngresadoDos);

            }
            break;
        case 4:
            printf ("\nEl resultado de la suma es:: %.2f\n",resultadoSuma);
            printf ("\nEl resultado de la resta es:  %.2f\n",resultadoResta);
            printf ("\nEl resultado de la multiplicación es: %.2f\n",resultadoMultiplicacion);
            if(operandoIngresadoUno==0)
            {
                 printf("\nNo es posible dividir por cero.\n");
            }
            else
            {
                printf ("\nEl resultado de la división es: %.2f\n",resultadoDivision);
            }
            if(operandoIngresadoUno>0)
            {
                printf ("\nEl factorial de A es: %ld ",resultadoFactorialUno);
            }
            else
            {
                printf("\nNo se puede realizar el factorial de un numero negativo y decimal\n");
            }
            if( operandoIngresadoDos>0)
            {
                 printf ("y el factorial de B es: %ld \n\n",resultadoFactorialDos);
            }
            else
            {
                 printf("\nNo se puede realizar el factorial de un numero negativo y decimal\n");
            }
            break;
        case 5:
            printf("\t\tGracias por usar la calculadora\n");
            break;
        default:
            printf("\t\tSe genero un error ingrese nuevamente\n");
            Menu(operandoIngresadoUno,operandoIngresadoDos);
            break;
        }
     }
     while(opcion!=5);




    return 0;
}
