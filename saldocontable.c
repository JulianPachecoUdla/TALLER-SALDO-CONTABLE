#include <stdio.h>
#include "funciones.h"
#define SERVICIOS_BASICOS 120
#define ARRIENDO 500
#define SUELDOS 3600
int main() {
    int mes;
    printf("Ingrese el numero de meses: ");
    scanf("%d", &mes);

    float a, b, c, d, gastos, ganancias, saldoContable = 0;
    float saldoMesAnterior = 0;

    for (int i = 0; i < mes; i++) {
        printf("\nMes %d:\n", i + 1);
        ingresodatos(&a, &b, &c, &d);
        gastos = calcgastos(a, b);
        ganancias = calcganancias(c, d, saldoMesAnterior);
        saldoContable = saldocontable(gastos, ganancias);
        imprimirresultados(gastos, ganancias, saldoContable, saldoMesAnterior, a, b, c, d,
                           SERVICIOS_BASICOS, ARRIENDO, SUELDOS);
        saldoMesAnterior = saldoContable;
    }
    return 0;
}
