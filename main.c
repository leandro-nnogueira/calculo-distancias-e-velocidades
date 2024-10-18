#include <stdio.h>

void calculate_distance(double speed, double time) {
    double distance = (speed * time) / 60.0;
    printf("Distância percorrida: %.2f km\n", distance);
}

void calculate_time(double speed, double distance) {
    double time = (distance / speed) * 60.0;
    printf("Tempo necessário: %.2f minutos\n", time);
}

void calculate_speed(double distance, double time) {
    double speed = (distance / time) * 60.0;
    printf("Velocidade necessária: %.2f km/h\n", speed);
}

int main() {
    double speed, time, distance;
    int option;

    printf("Escolha uma opção:\n");
    printf("1. Calcular distância percorrida\n");
    printf("2. Calcular tempo necessário\n");
    printf("3. Calcular velocidade necessária\n");
    printf("Opção: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Informe a velocidade (km/h): ");
            scanf("%lf", &speed);
            printf("Informe o tempo (minutos): ");
            scanf("%lf", &time);
            calculate_distance(speed, time);
            break;
        case 2:
            printf("Informe a velocidade (km/h): ");
            scanf("%lf", &speed);
            printf("Informe a distância (km): ");
            scanf("%lf", &distance);
            calculate_time(speed, distance);
            break;
        case 3:
            printf("Informe a distância (km): ");
            scanf("%lf", &distance);
            printf("Informe o tempo (minutos): ");
            scanf("%lf", &time);
            calculate_speed(distance, time);
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
