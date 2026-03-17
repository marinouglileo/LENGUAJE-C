#include <stdio.h>

int main() {
    int opcion;
    double cantidad, resultado;

    // Tipos de cambio aproximados (pueden cambiar según el día)
    const double Q_TO_USD = 0.13; // 1 Quetzal ≈ 0.13 USD
    const double USD_TO_Q = 7.75; // 1 USD ≈ 7.75 GTQ
    const double Q_TO_EUR = 0.12; // 1 Quetzal ≈ 0.12 EUR
    const double EUR_TO_Q = 8.40; // 1 EUR ≈ 8.40 GTQ
    const double USD_TO_EUR = 0.92; // 1 USD ≈ 0.92 EUR
    const double EUR_TO_USD = 1.09; // 1 EUR ≈ 1.09 USD

    do {
        printf("\n=== CONVERTIDOR DE MONEDAS ===\n");
        printf("1. Quetzales a Dólares\n");
        printf("2. Quetzales a Euros\n");
        printf("3. Dólares a Quetzales\n");
        printf("4. Dólares a Euros\n");
        printf("5. Euros a Quetzales\n");
        printf("6. Euros a Dólares\n");
        printf("0. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese cantidad en Quetzales: ");
                scanf("%lf", &cantidad);
                resultado = cantidad * Q_TO_USD;
                printf("%.2lf GTQ = %.2lf USD\n", cantidad, resultado);
                break;
            case 2:
                printf("Ingrese cantidad en Quetzales: ");
                scanf("%lf", &cantidad);
                resultado = cantidad * Q_TO_EUR;
                printf("%.2lf GTQ = %.2lf EUR\n", cantidad, resultado);
                break;
            case 3:
                printf("Ingrese cantidad en Dólares: ");
                scanf("%lf", &cantidad);
                resultado = cantidad * USD_TO_Q;
                printf("%.2lf USD = %.2lf GTQ\n", cantidad, resultado);
                break;
            case 4:
                printf("Ingrese cantidad en Dólares: ");
                scanf("%lf", &cantidad);
                resultado = cantidad * USD_TO_EUR;
                printf("%.2lf USD = %.2lf EUR\n", cantidad, resultado);
                break;
            case 5:
                printf("Ingrese cantidad en Euros: ");
                scanf("%lf", &cantidad);
                resultado = cantidad * EUR_TO_Q;
                printf("%.2lf EUR = %.2lf GTQ\n", cantidad, resultado);
                break;
            case 6:
                printf("Ingrese cantidad en Euros: ");
                scanf("%lf", &cantidad);
                resultado = cantidad * EUR_TO_USD;
                printf("%.2lf EUR = %.2lf USD\n", cantidad, resultado);
                break;
            case 0:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida, intente de nuevo.\n");
        }

    } while(opcion != 0);

    return 0;
}