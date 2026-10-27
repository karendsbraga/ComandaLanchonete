#include <stdio.h>

int main() {
    int codigo;
    float subtotal = 0;

    do {
        printf("\n======= CARDAPIO =======\n");
        printf("1. Hamburguer Tradic: R$ 15.00\n");
        printf("2. Batata Frita: R$ 8.00\n");
        printf("3. Refrigerante Lata: R$ 5.00\n");
        printf("4. Milkshake Chocolate: R$ 12.00\n");
        printf("0. Finalizar Pedido\n");
        printf("========================================\n");
        printf("Informe o codigo do produto desejado: ");
        scanf("%d", &codigo);

        if (codigo == 1) {
            subtotal += 15;
            printf("\n Hamburguer adicionado, seu subtotal �: R$ %.2f\n", subtotal);
        } else if (codigo == 2) {
            subtotal += 8;
            printf("\n Batata Frita adicionada, seu subtotal �: R$ %.2f\n", subtotal);
        } else if (codigo == 3) {
            subtotal += 5;
            printf("\n Refrigerante adicionado, seu subtotal �: R$ %.2f\n", subtotal);
        } else if (codigo == 4) {
            subtotal += 12;
            printf("\n Milkshake adicionado, seu subtotal �: R$ %.2f\n", subtotal);
        
        } else if (codigo != 0) {
            
            printf("\n> Opcao invalida! Digite um codigo do cardapio.\n");
        }

    } while (codigo != 0);

    printf("\nCompra Finalizada !\n");
    printf("VALOR TOTAL: R$ %.2f\n", subtotal);

    return 0;
}