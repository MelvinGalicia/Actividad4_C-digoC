#include <stdio.h>

#define GTQ_TO_USD 0.13
#define GTQ_TO_EUR 0.11
#define USD_TO_GTQ 7.75
#define USD_TO_EUR 0.85
#define EUR_TO_GTQ 9.17
#define EUR_TO_USD 1.18

float convertirGTQtoUSD(float cantidad) {
    return cantidad * GTQ_TO_USD;
}

float convertirUSDtoGTQ(float cantidad) {
    return cantidad * USD_TO_GTQ;
}

float convertirGTQtoEUR(float cantidad) {
    return cantidad * GTQ_TO_EUR;
}

float convertirEURtoGTQ(float cantidad) {
    return cantidad * EUR_TO_GTQ;
}

float convertirUSDtoEUR(float cantidad) {
    return cantidad * USD_TO_EUR;
}

float convertirEURtoUSD(float cantidad) {
    return cantidad * EUR_TO_USD;
}

int main() {
    int opcion;
    float cantidad;

    printf("Bienvenido al Conversor de Monedas\n");
    printf("Seleccione la opción deseada:\n");
    printf("1. Convertir de quetzales a dólares estadounidenses\n");
    printf("2. Convertir de dólares estadounidenses a quetzales\n");
    printf("3. Convertir de quetzales a euros\n");
    printf("4. Convertir de euros a quetzales\n");
    printf("5. Convertir de dólares estadounidenses a euros\n");
    printf("6. Convertir de euros a dólares estadounidenses\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            printf("%.2f GTQ equivale a %.2f USD\n", cantidad, convertirGTQtoUSD(cantidad));
            break;
        case 2:
            printf("%.2f USD equivale a %.2f GTQ\n", cantidad, convertirUSDtoGTQ(cantidad));
            break;
        case 3:
            printf("%.2f GTQ equivale a %.2f EUR\n", cantidad, convertirGTQtoEUR(cantidad));
            break;
        case 4:
            printf("%.2f EUR equivale a %.2f GTQ\n", cantidad, convertirEURtoGTQ(cantidad));
            break;
        case 5:
            printf("%.2f USD equivale a %.2f EUR\n", cantidad, convertirUSDtoEUR(cantidad));
            break;
        case 6:
            printf("%.2f EUR equivale a %.2f USD\n", cantidad, convertirEURtoUSD(cantidad));
            break;
        default:
            printf("Opción no válida\n");
    }

    return 0;
}