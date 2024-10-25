/**
 * @file main.c
 * @brief Programa para calcular distância, tempo e velocidade.
 *
 * Este programa permite ao usuário calcular a distância percorrida, o tempo necessário
 * ou a velocidade necessária com base em entradas fornecidas pelo usuário.
 *  
 * O programa apresenta um menu com as seguintes opções:
 * 1. Calcular distância percorrida
 * 2. Calcular tempo necessário
 * 3. Calcular velocidade necessária
 * 4. Sair
 * 
 * O usuário pode escolher uma das opções e fornecer os valores necessários para os cálculos.
 * 
 * Funções:
 * - void calculate_distance(double speed, double time): Calcula a distância percorrida com base na velocidade e no tempo.
 * - void calculate_time(double speed, double distance): Calcula o tempo necessário com base na velocidade e na distância.
 * - void calculate_speed(double distance, double time): Calcula a velocidade necessária com base na distância e no tempo.
 * 
 * @author Leandro N. Nogueira
 * @date 18/10/2024
 */

#include <stdio.h>

#include <stdlib.h>

// Função para calcular a distância percorrida com base na velocidade e no tempo
void calculate_distance(double speed, double time) {
    double distance = (speed * time) / 60.0; // Calcula a distância em km
    printf("Distância percorrida: %.2f km\n", distance); // Exibe a distância calculada
}

// Função para calcular o tempo necessário com base na velocidade e na distância
void calculate_time(double speed, double distance) {
    double time = (distance / speed) * 60.0; // Calcula o tempo em minutos
    printf("Tempo necessário: %.2f minutos\n", time); // Exibe o tempo calculado
}

// Função para calcular a velocidade necessária com base na distância e no tempo
void calculate_speed(double distance, double time) {
    double speed = (distance / time) * 60.0; // Calcula a velocidade em km/h
    printf("Velocidade necessária: %.2f km/h\n", speed); // Exibe a velocidade calculada
}

int main() {
    double *speed = (double *)malloc(sizeof(double)); // Aloca memória para a variável de velocidade
    double *time = (double *)malloc(sizeof(double)); // Aloca memória para a variável de tempo
    double *distance = (double *)malloc(sizeof(double)); // Aloca memória para a variável de distância
    int option; // Declaração da variável para armazenar a opção do usuário

    if (speed == NULL || time == NULL || distance == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; // Retorna 1 para indicar que houve um erro
    }

    do {
        // Exibe o menu de opções para o usuário
        printf("Escolha uma opção:\n");
        printf("1. Calcular distância percorrida\n");
        printf("2. Calcular tempo necessário\n");
        printf("3. Calcular velocidade necessária\n");
        printf("4. Sair\n");
        printf("Opção: ");
        scanf("%d", &option); // Lê a opção escolhida pelo usuário

        switch (option) {
            case 1:
                // Opção para calcular a distância percorrida
                printf("Informe a velocidade (km/h): ");
                scanf("%lf", speed); // Lê a velocidade fornecida pelo usuário
                printf("Informe o tempo (minutos): ");
                scanf("%lf", time); // Lê o tempo fornecido pelo usuário
                calculate_distance(*speed, *time); // Chama a função para calcular a distância
                break;
            case 2:
                // Opção para calcular o tempo necessário
                printf("Informe a velocidade (km/h): ");
                scanf("%lf", speed); // Lê a velocidade fornecida pelo usuário
                printf("Informe a distância (km): ");
                scanf("%lf", distance); // Lê a distância fornecida pelo usuário
                calculate_time(*speed, *distance); // Chama a função para calcular o tempo
                break;
            case 3:
                // Opção para calcular a velocidade necessária
                printf("Informe a distância (km): ");
                scanf("%lf", distance); // Lê a distância fornecida pelo usuário
                printf("Informe o tempo (minutos): ");
                scanf("%lf", time); // Lê o tempo fornecido pelo usuário
                calculate_speed(*distance, *time); // Chama a função para calcular a velocidade
                break;
            case 4:
                // Opção para sair do programa
                printf("Saindo...\n");
                break;
            default:
                // Caso o usuário escolha uma opção inválida
                printf("Opção inválida.\n");
                break;
        }
    } while (option != 4); // Repete o loop até que o usuário escolha a opção de sair

    free(speed); // Libera a memória alocada para a variável de velocidade
    free(time); // Libera a memória alocada para a variável de tempo
    free(distance); // Libera a memória alocada para a variável de distância

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
