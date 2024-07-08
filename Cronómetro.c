#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main() {
    int h, m, s; // Definição do tipo de variável para a hora, minutos e segundos 
    int d = 1000; // Delay de 1000 milissegundos para usar no Sleep time 

    printf("Set time (hh:mm:ss): \n"); // Pedido ao utilizador para colocar a partir de que tempo pretende iniciar a contagem 
    scanf("%d%d%d", &h, &m, &s); // Permite ao utilizador que insira o tempo em que pretende iniciar a contagem 
    if (h >= 24 || m >= 60 || s >= 60) { // Condição de que o dia só tem 24h, os minutos 60 e os segundos 60 
        printf("Erro! \n"); // Se tiver mais que os valores irá dar erro 
        exit(0); // Se der erro sairá do programa 
    }

    while (1) {
        s--; // Decrementa os segundos
        if (s < 0) {
            m--; // Quando os segundos atingem menos de 0, decrementa-se 1 minuto e começa a contar os segundos a partir de 59 novamente
            s = 59;
        }
        if (m < 0) {
            h--; // Quando os minutos atingem menos de 0, decrementa-se 1 hora e começa a contar os minutos a partir de 59 novamente
            m = 59;
        }
        if (h < 0) { // Quando a hora atinge menos de 0, termina a contagem
            break;
        }
        printf("\t\t\t\t\t\t\t");
        printf("\n\t\t\t\t\t\t\t  TIMER");
        printf("\n\t\t\t\t\t\t\t %.2d:%.2d:%.2d", h, m, s);
        Sleep(d); 
        
        system("cls");
    }

    printf("\n\t\t\t\t\t\t\t  TIME'S UP!\n");
    
    return 0;     
}

