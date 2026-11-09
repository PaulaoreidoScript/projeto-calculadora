#include <stdio.h>
#include <string.h>

int main() {
    int opcao;
    double n1, n2, resultado;
    char entrada[100];
    char resposta;

    while (1) {

        printf("===============================\n");
        printf("      Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operacao:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Opcao: ");

        scanf("%99s", entrada);

        if (strlen(entrada) != 1 ||
            entrada[0] < '1' || entrada[0] > '5') {

            printf("Opcao invalida! Tente novamente.\n\n");

            while (getchar() != '\n');
            continue;
        }

        opcao = entrada[0] - '0';

        while (getchar() != '\n');

        if (opcao == 5) {
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            break;
        }

        printf("Digite o primeiro numero: ");
        scanf("%lf", &n1);

        printf("Digite o segundo numero: ");
        scanf("%lf", &n2);

        if (opcao == 1) {
            resultado = n1 + n2;
            printf("Resultado: %.2lf + %.2lf = %.2lf\n", n1, n2, resultado);
        }
        else if (opcao == 2) {
            resultado = n1 - n2;
            printf("Resultado: %.2lf - %.2lf = %.2lf\n", n1, n2, resultado);
        }
        else if (opcao == 3) {
            resultado = n1 * n2;
            printf("Resultado: %.2lf * %.2lf = %.2lf\n", n1, n2, resultado);
        }
        else if (opcao == 4) {

            if (n2 == 0) {
                printf("Erro! Nao e possivel dividir por zero.\n");
            }
            else {
                resultado = n1 / n2;
                printf("Resultado: %.2lf / %.2lf = %.2lf\n", n1, n2, resultado);
            }
        }

        // Repete a pergunta ate receber uma resposta valida
        do {
            printf("\nDeseja realizar outra operacao? (s/n): ");
            scanf(" %c", &resposta);

            while (getchar() != '\n');

            if (resposta != 's' && resposta != 'S' &&
                resposta != 'n' && resposta != 'N') {

                printf("Resposta invalida! Digite s ou n.\n");
            }

        } while (resposta != 's' && resposta != 'S' &&
                 resposta != 'n' && resposta != 'N');

        if (resposta == 'n' || resposta == 'N') {
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            break;
        }

        printf("\n");
    }

    return 0;
}
