#include <stdio.h>
#include <string.h>

int main ()
{
    int n, num, i, sumapares = 0, sumaimpares = 0;
    printf("Ingrese la cantidad de numeros que desea ingresar: ");
    scanf("%d", &n);
    int u[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", &u[i]);
    }
    for (i=0; i<n; i++)
    {
        if (u[i]%2 == 0)
        {
            sumapares = sumapares * u[i];
        }
        else if (u[i]%2 != 0)
        {
            sumaimpares = sumaimpares * u[i];
        }
    }
    printf("La suma de los numeros pares es: %d \n", sumapares);
    printf("La suma de los numeros impares es: %d", sumaimpares);

}
