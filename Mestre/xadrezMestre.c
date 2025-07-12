//
// Created by Guilherme on 11/07/2025.
//
#include <stdio.h>

void movimentoTorre(int opcao, int quantidadeMov) {

    switch (opcao) {
        case 1:
            if (quantidadeMov > 0) {
                movimentoTorre(opcao, quantidadeMov - 1);
                printf("Movimento para esquerda\n");
            };
            break;
        case 2:
            if (quantidadeMov > 0) {
                movimentoTorre(opcao, quantidadeMov - 1);
                printf("Movimento para direita\n");
            };
            break;
        case 3:
            if (quantidadeMov > 0) {
                movimentoTorre(opcao, quantidadeMov - 1);
                printf("Movimento para cima\n");
            };
            break;
        case 4:
            if (quantidadeMov > 0) {
                movimentoTorre(opcao, quantidadeMov - 1);
                printf("Movimento para baixo\n");
            };
            break;
    };

    /*
     * Os movimentos usam recursividade das funções, para substituir as estruturas de repetição.
     */

};

void movimentoBispo(int opcao, int quantidadeMov) {
    switch (opcao) {
        case 1:
            if (quantidadeMov > 0) {
                for ( int i = 0 ; i < 1 ; i++ ) {
                    for ( int j = 0 ; j < 1 ; j++ ) {
                        printf("Movimento para cima\n");
                        printf("Movimento para esquerda\n");
                    };
                };
              movimentoBispo(opcao, quantidadeMov - 1);
            };
            break;
        case 2:
            if (quantidadeMov > 0) {
                for ( int i = 0 ; i < 1 ; i++ ) {
                    for ( int j = 0 ; j < 1 ; j++ ) {
                        printf("Movimento para cima\n");
                        printf("Movimento para direita\n");
                    };
                };
                movimentoBispo(opcao, quantidadeMov - 1);
            };
            break;
        case 3:
            if (quantidadeMov > 0) {
                for ( int i = 0 ; i < 1 ; i++ ) {
                    for ( int j = 0 ; j < 1 ; j++ ) {
                        printf("Movimento para baixo\n");
                        printf("Movimento para esquerda\n");
                    };
                };
                movimentoBispo(opcao, quantidadeMov - 1);
            };
            break;
        case 4:
            if (quantidadeMov > 0) {
                for ( int i = 0 ; i < 1 ; i++ ) {
                    for ( int j = 0 ; j < 1 ; j++ ) {
                        printf("Movimento para baixo\n");
                        printf("Movimento para direita\n");
                    };
                };
                movimentoBispo(opcao, quantidadeMov - 1);
            };
            break;
    };

    /*
     * Os movimentos do bispos são ajustados de acordo com o enunciado do desafio nivel mestre.
     * OBS: A recursividade nesse caso parece ser mais ditadica do que performatica.
     */

};

void movimentoRainha(int opcao, int quantidadeMov) {
    switch (opcao) {
        case 1:
            if (quantidadeMov > 0) {
                movimentoRainha(opcao, quantidadeMov - 1);
                printf("Movimento para esquerda\n");
            };
            break;
        case 2:
            if (quantidadeMov > 0) {
                movimentoRainha(opcao, quantidadeMov - 1);
                printf("Movimento para direita\n");
            };
            break;
        case 3:
            if (quantidadeMov > 0) {
                movimentoRainha(opcao, quantidadeMov - 1);
                printf("Movimento para cima\n");
            };
            break;
        case 4:
            if (quantidadeMov > 0) {
                movimentoRainha(opcao, quantidadeMov - 1);
                printf("Movimento para baixo\n");
            };
            break;
        case 5:
            if (quantidadeMov > 0) {
                movimentoRainha(opcao, quantidadeMov - 1);
                printf("Movimento para cima\n");
                printf("Movimento para esquerda\n");
            };
            break;
        case 6:
            if (quantidadeMov > 0) {
                movimentoRainha(opcao, quantidadeMov - 1);
                printf("Movimento para cima\n");
                printf("Movimento para direita\n");
            };
            break;
        case 7:
            if (quantidadeMov > 0) {
                movimentoRainha(opcao, quantidadeMov - 1);
                printf("Movimento para baixo\n");
                printf("Movimento para esquerda\n");
            };
            break;
        case 8:
            if (quantidadeMov > 0) {
                movimentoRainha(opcao, quantidadeMov - 1);
                printf("Movimento para baixo\n");
                printf("Movimento para direita\n");
            };
            break;
    };

    /*
     * Os movimentos usam recursividade das funções, para substituir as estruturas de repetição.
     */

};

void torre() {

    /*
    * Variavel que vai armazenar a resposta do movimento da "Torre".
    * Variavel que vai armazenar a resposta se vai ou não fechar o ‘loop’.
    */
    unsigned int respostaTorre;
    unsigned int exit_Torre = 1;

    do {

        printf("Escolha o movimento que voce quer fazer na 'Torre':\n");
        printf("1. 5 Casas para 'Horizontal Esquerda'\n");
        printf("2. 5 Casas para 'Horizontal Direita'\n");
        printf("3. 5 Casas para 'Vertical Cima'\n");
        printf("4. 5 Casas para 'Vertical Baixo'\n");
        printf("Resposta:");
        scanf("%u", &respostaTorre);
        printf("============================\n");

        if (respostaTorre < 1 || respostaTorre > 4) {
            printf("Opcao de movimento invalida.\n");
            printf("============================\n");
            respostaTorre = 0;
        } else {


            // A função de movimento é baseada na entrada do usuário feito no scanf() acima, e direcionado por um switch.
            // A quantidade de movimento é pré-definida no propio codigo a pedido do enunciado.
            movimentoTorre(respostaTorre, 5);
            printf("============================\n");

            printf("Gostaria de fazer outro movimento com a 'Torre':\n");
            printf("1 = Sim\n");
            printf("0 = Nao\n");
            printf("Reposta:");
            scanf("%u", &exit_Torre);
            printf("============================\n");
            /*
             * A resposta do usuário vai determinar se ele vai querer escolher_
             * Outras opções de movimento do cavalo ou não.
             */

            if (exit_Torre < 0 || exit_Torre > 1) {
                printf("Opcao de continuidade invalida.\n");
                printf("============================\n");
                exit_Torre = 1;
                /*
                 * Se o usuário digitar uma entrada que não aceite, ou seja, diferente de 0 ou 1.
                 * O programa define como 1 novamente e continua o ‘loop’ para o jogador escolher outro movimento da peça.
                */
            };

        };

    } while (exit_Torre == 1); // Enquanto 1, Looping rolando.

};

void bispo() {

    /*
    * Variavel que vai armazenar a resposta do movimento da "Torre".
    * Variavel que vai armazenar a resposta se vai ou não fechar o ‘loop’.
    */
    unsigned int respostaBispo;
    unsigned int exit_Bispo = 1;

    do {

        printf("Escolha o movimento que voce quer fazer no 'Bispo':\n");
        printf("1. 5 Casas para 'Diagonal Esquerda para cima'\n");
        printf("2. 5 Casas para 'Diagonal Direita para cima'\n");
        printf("3. 5 Casas para 'Diagonal Esquerda para baixo'\n");
        printf("4. 5 Casas para 'Diagonal Direita para baixo'\n");
        printf("Resposta:");
        scanf("%u", &respostaBispo);
        printf("============================\n");

        if (respostaBispo < 1 || respostaBispo > 4) {
            printf("Opcao de movimento invalida.\n");
            printf("============================\n");
            respostaBispo = 0;
        } else {

            // A função de movimento é baseada na entrada do usuário feito no scanf() acima, e direcionado por um switch.
            // A quantidade de movimento é pré-definida no propio codigo a pedido do enunciado.
            movimentoBispo(respostaBispo, 5);
            printf("============================\n");

            printf("Gostaria de fazer outro movimento com o 'Bispo':\n");
            printf("1 = Sim\n");
            printf("0 = Nao\n");
            printf("Reposta:");
            scanf("%u", &exit_Bispo);
            printf("============================\n");

            if (exit_Bispo < 0 || exit_Bispo > 1) {
                printf("Opcao de continuidade invalida.\n");
                printf("============================\n");
                exit_Bispo = 1; // Continua Loop
                /*
                 * Se o usuário digitar uma entrada que não aceite, ou seja, diferente de 0 ou 1.
                 * O programa define como 1 novamente e continua o ‘loop‘ para o jogador escolher outro movimento da peça.
                */
            };

        };

    } while (exit_Bispo == 1); // Enquanto 1, Looping rolando.

};

void rainha() {

    /*
    * Variavel que vai armazenar a resposta do movimento da "Torre".
    * Variavel que vai armazenar a resposta se vai ou não fechar o ‘loop’.
    */
    unsigned int respostaRainha;
    unsigned int exit_Rainha = 1;

    do {

        printf("Escolha o movimento que voce quer fazer na 'Rainha':\n");
        printf("1. 8 Casas para 'Horizontal Esquerda'\n");
        printf("2. 8 Casas para 'Horizontal Direita'\n");
        printf("3. 8 Casas para 'Vertical Cima'\n");
        printf("4. 8 Casas para 'Vertical Baixo'\n");
        printf("5. 8 Casas para 'Diagonal Esquerda Cima'\n");
        printf("6. 8 Casas para 'Diagonal Direita Cima'\n");
        printf("7. 8 Casas para 'Diagonal Esquerda Baixo'\n");
        printf("8. 8 Casas para 'Diagonal Direita Baixo'\n");
        printf("Resposta:");
        scanf("%u", &respostaRainha);
        printf("============================\n");

        if (respostaRainha < 1 || respostaRainha > 8) {
            printf("Opcao de movimento invalida.\n");
            printf("============================\n");
            respostaRainha = 0;
        } else {

            // A função de movimento é baseada na entrada do usuário feito no scanf() acima, e direcionado por um switch.
            // A quantidade de movimento é pré-definida no propio codigo a pedido do enunciado.
            movimentoRainha(respostaRainha, 8);
            printf("=============================\n");

            printf("Gostaria de fazer outro movimento com a 'Rainha':\n");
            printf("1 = Sim\n");
            printf("0 = Nao\n");
            printf("Reposta:");
            scanf("%u", &exit_Rainha);
            printf("============================\n");

            if (exit_Rainha < 0 || exit_Rainha > 1) {
                printf("Opcao de continuidade invalida.\n");
                printf("============================\n");
                exit_Rainha = 1; // Continua Loop
                /*
                 * Se o usuário digitar uma entrada que não aceite, ou seja, diferente de 0 ou 1.
                 * O programa define como 1 novamente e continua o ‘loop’ para o jogador escolher outro movimento da peça.
                */
            };

        };

    } while (exit_Rainha == 1); // Enquanto 1, Looping rolando.

};

void cavalo() {

    /*
    * Variavel que vai armazenar a resposta do movimento da "Torre".
    * Variavel que vai armazenar a resposta se vai ou não fechar o ‘loop’.
    */
    unsigned int respostaCavalo;
    unsigned int exit_Cavalo = 1;

    do {

        printf("Escolha o movimento que voce quer fazer no 'Cavalo':\n");
        printf("1. 2 casa para cima 1 esquerda'\n");
        printf("2. 2 casa para cima 1 direita'\n");
        printf("3. 2 casa para baixo 1 esquerda'\n");
        printf("4. 2 casa para baixo 1 direita'\n");
        printf("5. 2 casa para a esquerda 1 cima'\n");
        printf("6. 2 casa para a esquerda 1 baixo'\n");
        printf("7. 2 casa para a direita 1 cima'\n");
        printf("8. 2 casa para a direita 1 baixo'\n");
        printf("Resposta:");
        scanf("%u", &respostaCavalo);
        printf("============================\n");

        if (respostaCavalo < 1 || respostaCavalo > 8) {
            printf("Opcao de movimento invalida.\n");
            printf("============================\n");
            respostaCavalo = 0;
        } else {

            switch (respostaCavalo) {
                case 1:
                    for (int i = 0; i < 3 ; i++) {
                        if (i == 2) {
                            printf("Movendo para esquerda\n");
                            break; // Termina com o ‘loop’
                        };

                        for (int j = 0; j < 2; j++) {
                            if ( j < 1) {
                                continue;
                            }
                            printf("Movendo para cima\n");
                        };
                    };
                    break;
                case 2:
                    for (int i = 0; i < 3 ; i++) {
                        if (i == 2) {
                            printf("Movendo para direita\n");
                            break; // Termina com o ‘loop’
                        };

                        for (int j = 0; j < 2; j++) {
                            if ( j < 1) {
                                continue;
                            }
                            printf("Movendo para cima\n");
                        };
                    };
                    break;
                case 3:
                    for (int i = 0; i < 3 ; i++) {
                        if (i == 2) {
                            printf("Movendo para esquerda\n");
                            break; // Termina com o ‘loop’
                        };

                        for (int j = 0; j < 2; j++) {
                            if ( j < 1) {
                                continue;
                            }
                            printf("Movendo para baixo\n");
                        };
                    };
                    break;
                case 4:
                    for (int i = 0; i < 3 ; i++) {
                        if (i == 2) {
                            printf("Movendo para direita\n");
                            break; // Termina com o ‘loop’
                        };

                        for (int j = 0; j < 2; j++) {
                            if ( j < 1) {
                                continue;
                            }
                            printf("Movendo para baixo\n");
                        };
                    };
                    break;
                case 5:
                    for (int i = 0; i < 3 ; i++) {
                        if (i == 2) {
                            printf("Movendo para cima\n");
                            break; // Termina com o ‘loop’
                        };

                        for (int j = 0; j < 2; j++) {
                            if ( j < 1) {
                                continue;
                            }
                            printf("Movendo para esquerda\n");
                        };
                    };
                    break;
                case 6:
                    for (int i = 0; i < 3 ; i++) {
                        if (i == 2) {
                            printf("Movendo para baixo\n");
                            break; // Termina com o ‘loop’
                        };

                        for (int j = 0; j < 2; j++) {
                            if ( j < 1) {
                                continue;
                            }
                            printf("Movendo para esquerda\n");
                        };
                    };
                    break;
                case 7:
                    for (int i = 0; i < 3 ; i++) {
                        if (i == 2) {
                            printf("Movendo para cima\n");
                            break; // Termina com o ‘loop’
                        };

                        for (int j = 0; j < 2; j++) {
                            if ( j < 1) {
                                continue;
                            }
                            printf("Movendo para direita\n");
                        };
                    };
                    break;
                case 8:
                    for (int i = 0; i < 3 ; i++) {
                        if (i == 2) {
                            printf("Movendo para baixo\n");
                            break; // Termina com o ‘loop’
                        };

                        for (int j = 0; j < 2; j++) {
                            if ( j < 1) {
                                continue;
                            }
                            printf("Movendo para direita\n");
                        };
                    };
                    break;
            };

            printf("============================\n");
            printf("Gostaria de fazer outro movimento com o 'Cavalo':\n");
            printf("1 = Sim\n");
            printf("0 = Nao\n");
            printf("Reposta:");
            scanf("%u", &exit_Cavalo);
            printf("============================\n");

            if (exit_Cavalo < 0 || exit_Cavalo > 1) {
                printf("Opcao de continuidade invalida.\n");
                printf("============================\n");
                exit_Cavalo = 1; // Continua Loop
                /*
                 * Se o usuário digitar uma entrada que não seja aceite, ou seja, diferente de 0 ou 1.
                 * O programa define como 1 novamente e continua o ‘loop’ para o jogador escolher outro movimento da peça.
                */
            };

        };

    } while (exit_Cavalo == 1); // Enquanto 1, Looping rolando.
}

int main(){

    /*
     * 1 Continua Loop.
     * 0 Termina Loop.
     */
    unsigned int exit_Continue = 1; // A variavel é responsavel por determinar o fim do loop do "Do While".
    unsigned int respostaPeca = 0; // A variavel é responsavel por guardar a reposta da peça que o usuário decidiu mover.

    do {

        printf("Escolha uma peca para movimentar:\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("Resposta:");
        scanf("%u", &respostaPeca);
        printf("============================\n");

        // Testa se a resposta do usuário está fora do padrão permitido.
        if (respostaPeca < 1 || respostaPeca > 4) {
            printf("Peca invalida...\n");
            printf("============================\n");
        } else {

            switch (respostaPeca) {
                case 1:
                    torre(); // Chama a função da torre
                break;
                case 2:
                    bispo(); // Chama a função do Bispo
                break;
                case 3:
                    rainha(); // Chama a função da Rainha
                break;
                case 4:
                    cavalo(); // Chama a função do cavalo
                break;
            };

            /*
             * Só executado quando todos os processos do case terminarem.
             */
            printf("Gostaria de escolher outra peca:\n");
            printf("1 = Sim\n");
            printf("0 = Nao\n");
            printf("Resposta:");
            scanf("%u", &exit_Continue);

        };

    } while (exit_Continue == 1); // Enquanto igualar 1, programa vai continuar rodando
    /*
     * A resposta é dada pelo usuário, 1 para continuar, 0 para fechar.
     * Nenhuma implementação de verificação erro de entrada foi adicionada aqui, não é necessario.
     */

    printf("============================\n");
    printf("Fechando programa...\n");

    return 0;
};