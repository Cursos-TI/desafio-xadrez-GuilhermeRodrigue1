//
// Created by Guilherme on 10/07/2025.
//
//
// Created by Guilherme on 10/07/2025.
//
#include <stdio.h>

void torre() {

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

            switch (respostaTorre) {
                case 1:

                    for(int i = 1; i < 6; i++) {
                        printf("%i: Movendo horizontalmente para a esquerda\n", i);
                    };
                    printf("============================\n");

                    break;
                case 2:

                    for(int i = 1; i < 6; i++) {
                        printf("%i: Movendo horizontalmente para a direita\n", i);
                    };
                    printf("============================\n");

                    break;
                case 3:

                    for(int i = 1; i < 6; i++) {
                        printf("%i: Movendo verticalmente para cima\n", i);
                    };
                    printf("============================\n");

                    break;
                case 4:

                    for(int i = 1; i < 6; i++) {
                        printf("%i: Movendo verticalmente para baixo\n", i);
                    };
                    printf("============================\n");

                    break;
            };

            printf("Gostaria de fazer outro movimento com a 'Torre':\n");
            printf("1 = Sim\n");
            printf("0 = Nao\n");
            printf("Reposta:");
            scanf("%u", &exit_Torre);
            printf("============================\n");

            if (exit_Torre < 0 || exit_Torre > 1) {
                printf("Opcao de continuidade invalida.\n");
                printf("============================\n");
                exit_Torre = 1; // Continua Loop
            };

        };

    } while (exit_Torre == 1); // Enquanto 1, Looping rolando.

};

void bispo() {

    unsigned int respostaBispo;
    unsigned int exit_Bispo = 1;

    do {

        printf("Escolha o movimento que voce quer fazer no 'Bispo':\n");
        printf("1. 5 Casas para 'Diagonal Esquerda Cima'\n");
        printf("2. 5 Casas para 'Diagonal Direita Cima'\n");
        printf("3. 5 Casas para 'Diagonal Esquerda Baixo'\n");
        printf("4. 5 Casas para 'Diagnoal Direita Baixo'\n");
        printf("Resposta:");
        scanf("%u", &respostaBispo);
        printf("============================\n");

        if (respostaBispo < 1 || respostaBispo > 4) {
            printf("Opcao de movimento invalida.\n");
            printf("============================\n");
            respostaBispo = 0;
        } else {

            switch (respostaBispo) {
                case 1:

                    for(int i = 1; i < 6; i++) {
                        printf("%i: Movendo para cima\n", i);
                    }; // Move 5 casas para cima

                    for ( int i2 = 1; i2 < 6; i2++) {
                        printf("%i: Movendo para a esquerda\n", i2);
                    }; // Após mover tudo para cima, move 5 casas a esquerda

                    printf("============================\n");

                    break;
                case 2:

                    for(int i = 1; i < 6; i++) {
                        printf("%i: Movendo para cima\n", i);
                    }; // Move 5 casas para cima

                    for ( int i2 = 1; i2 < 6; i2++) {
                        printf("%i: Movendo para a direita\n", i2);
                    }; // Após mover tudo para cima, move 5 casas a direita

                    printf("============================\n");

                    break;
                case 3:

                    for(int i = 1; i < 6; i++) {
                        printf("%i: Movendo para baixo\n", i);
                    }; // Move 5 casas para baixo

                    for ( int i2 = 1; i2 < 6; i2++) {
                        printf("%i: Movendo para a esquerda\n", i2);
                    }; // Após mover tudo para baixo, move 5 casas a esquerda

                    printf("============================\n");

                    break;
                case 4:

                    for(int i = 1; i < 6; i++) {
                        printf("%i: Movendo para baixo\n", i);
                    }; // Move 5 casas para baixo

                    for ( int i2 = 1; i2 < 6; i2++) {
                        printf("%i: Movendo para a direita\n", i2);
                    }; // Após mover tudo para baixo, move 5 casas a direita

                    printf("============================\n");

                    break;
            };

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
            };

        };

    } while (exit_Bispo == 1); // Enquanto 1, Looping rolando.

};

void rainha() {

    unsigned int respostaRainha;
    unsigned int exit_Rainha = 1;

    do {

        printf("Escolha o movimento que voce quer fazer no 'Bispo':\n");
        printf("1. 8 Casas para 'Horizontal Esquerda'\n");
        printf("2. 8 Casas para 'Horizontal Direita'\n");
        printf("3. 8 Casas para 'Vertical Cima'\n");
        printf("4. 8 Casas para 'Vertical Baixo'\n");
        printf("5. 8 Casas para 'Diagonal Esquerda Cima'\n");
        printf("6. 8 Casas para 'Diagonal Direita Cima'\n");
        printf("7. 8 Casas para 'Diagonal Esquerda Baixo'\n");
        printf("8. 8 Casas para 'Diagnoal Direita Baixo'\n");
        printf("Resposta:");
        scanf("%u", &respostaRainha);
        printf("============================\n");

        if (respostaRainha < 1 || respostaRainha > 8) {
            printf("Opcao de movimento invalida.\n");
            printf("============================\n");
            respostaRainha = 0;
        } else {

            switch (respostaRainha) {
                case 1:

                    for(int i = 1; i < 9; i++) {
                        printf("%i: Movendo horizontalmente para a esquerda\n", i);
                    };
                    printf("============================\n");

                    break;
                case 2:

                    for(int i = 1; i < 9; i++) {
                        printf("%i: Movendo horizontalmente para a direita\n", i);
                    };
                    printf("============================\n");

                    break;
                case 3:

                    for(int i = 1; i < 9; i++) {
                        printf("%i: Movendo verticalmente para cima\n", i);
                    };
                    printf("============================\n");

                    break;
                case 4:

                    for(int i = 1; i < 9; i++) {
                        printf("%i: Movendo verticalmente para baixo\n", i);
                    };
                    printf("============================\n");

                    break;
                case 5:

                    for(int i = 1; i < 9; i++) {
                        printf("%i: Movendo para cima\n", i);
                    }; // Move 5 casas para cima

                    for ( int i2 = 1; i2 < 9; i2++) {
                        printf("%i: Movendo para a esquerda\n", i2);
                    }; // Após mover tudo para cima, move 5 casas a esquerda

                    printf("============================\n");

                    break;
                case 6:

                    for(int i = 1; i < 9; i++) {
                        printf("%i: Movendo para cima\n", i);
                    }; // Move 5 casas para cima

                    for ( int i2 = 1; i2 < 9; i2++) {
                        printf("%i: Movendo para a direita\n", i2);
                    }; // Após mover tudo para cima, move 5 casas a direita

                    printf("============================\n");

                    break;
                case 7:

                    for(int i = 1; i < 9; i++) {
                        printf("%i: Movendo para baixo\n", i);
                    }; // Move 5 casas para baixo

                    for ( int i2 = 1; i2 < 9; i2++) {
                        printf("%i: Movendo para a esquerda\n", i2);
                    }; // Após mover tudo para baixo, move 5 casas a esquerda

                    printf("============================\n");

                    break;
                case 8:

                    for(int i = 1; i < 9; i++) {
                        printf("%i: Movendo para baixo\n", i);
                    }; // Move 5 casas para baixo

                    for ( int i2 = 1; i2 < 9; i2++) {
                        printf("%i: Movendo para a direita\n", i2);
                    }; // Após mover tudo para baixo, move 5 casas a direita

                    printf("============================\n");

                    break;
            };

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
            };

        };

    } while (exit_Rainha == 1); // Enquanto 1, Looping rolando.

};

void cavalo() {

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
                    int i = 0;
                    while (i == 0) {
                        for ( int y = 0 ; y < 2 ; y++ ) {
                            printf("%i: Movendo para cima\n", y);
                        };
                        printf("%i: Movendo para esquerda\n", i);
                        i++;
                    };
                    break;
                case 2:



                    break;
                case 3:



                    break;
                case 4:


                    break;
                case 5:


                    break;
                case 6:



                    printf("============================\n");

                    break;
                case 7:


                    break;
                case 8:

                    printf("============================\n");

                    break;
            };

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
    unsigned int respostaPeca = 0; // A variavel é responsavel por guardar a reposta da peça que o usuario decidiu mover.

    do {

        printf("Escolha uma peca para movimentar:\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("Resposta:");
        scanf("%u", &respostaPeca);
        printf("============================\n");

        if (respostaPeca < 1 || respostaPeca > 4) {
            printf("Peca invalida...\n");
            printf("============================\n");
        } else {

            switch (respostaPeca) {
                case 1:
                    torre();
                break;
                case 2:
                    bispo();
                break;
                case 3:
                    rainha();
                break;
                case 4:
                    cavalo();
                break;
            };

            printf("Gostaria de escolher outra peca:\n");
            printf("1 = Sim\n");
            printf("0 = Nao\n");
            printf("Resposta:");
            scanf("%u", &exit_Continue);

        };

    } while (exit_Continue == 1);

    printf("============================\n");
    printf("Fechando programa...\n");

    return 0;
};