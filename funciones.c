#include <stdio.h>
#include "funciones.h"

#define SERVICIOS_BASICOS 120
#define ARRIENDO 500
#define SUELDOS 3600

void ingresodatos(float *a, float *b, float *c, float *d) {
    printf("Ingrese los gastos de logistica: ");
    scanf("%f", a);
    printf("Ingrese los gastos de mercadeo: ");
    scanf("%f", b);
    printf("Ingrese las ventas: ");
    scanf("%f", c);
    printf("Ingrese las inversiones: ");
    scanf("%f", d);
}

float calcgastos(float a, float b) {
    float gastos = SERVICIOS_BASICOS + ARRIENDO + SUELDOS + a + b;
    return gastos;
}

float calcganancias(float c, float d, float saldocont) {
    float ganancias = c + d + saldocont;
    return ganancias;
}

float saldocontable(float gastos, float ganancias) {
    float saldocont = ganancias - gastos;
    return saldocont;
}

void imprimirresultados(float gastos, float ganancias, float saldocont, float saldo_anterior, float a, float b, float c, float d,
                        float servicios_basicos, float arriendo, float sueldos) {
    printf("\nGASTOS: \n");
    printf("Servicios basicos: %.2f\n", servicios_basicos);
    printf("Arriendo: %.2f\n", arriendo);
    printf("Sueldos: %.2f\n", sueldos);
    printf("Gastos logistica: %.2f\n", a);
    printf("Gastos de mercadeo: %.2f\n", b);
    printf("Total Gastos: %.2f\n", gastos);
    printf("-------------------------------\n");
    printf("SALDO DEL MES ANTERIOR: %.2f\n", saldo_anterior);
    printf("-------------------------------\n");
    printf("INGRESOS: \n");
    printf("Ventas: %.2f\n", c);
    printf("Inversiones: %.2f\n", d);
    printf("Total Ingresos: %.2f\n", ganancias);
    printf("Saldo contable: %.2f\n", saldocont);
}
