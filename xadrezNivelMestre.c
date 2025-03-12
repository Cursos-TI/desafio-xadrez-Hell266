#include <stdio.h>
//criação da recursividade
void movimentoTorre(int casas){
    if (casas > 0){
        printf("Torre: direita\n");//direção do movimento

        movimentoTorre(casas - 1);//decremento para negativar a condição
    }
}
void movimentoBispo(int vertical, int horizontal){
    for (int i = 0 ; vertical > i ; i++){//uso de loops aninhados com for
        for (int j = 0; horizontal > j ; j++){

            printf("Bispo: cima, direita\n");//direção do movimento
        }
    }
}
void movimentoRainha(int casas){
    if (casas > 0){
        printf("Rainha: esquerda\n");//direção do movimento

        movimentoRainha(casas - 1);//decremento para negativar a condição
    }
}
void movimentoCavalo(){
    for (int i = 0; i < 1; i++){ // uso de dois loops "for" aninhado{
        for (int j = 2; j > 0; j--){
            printf("Cavalo: cima\n");//move o cavalo 2 vezes para cima
        }

        printf("Cavalo: direita\n");//move uma vez para a esquerda
    }
}

int main()
{
    printf("Bem vindo(a) ao programa simulador de movimentação de peças de xadrez nivel avançado!\n");
    printf("\n");
    printf("Este programa simula o movimento de 4 peças de xadrez(torre, bispo, rainha e cavalo, respectivamente),\n"
           "com o uso da recursividade e condições especificas requeridas pelo desafio.\n");

    printf("\n");
    printf("Movimento torre\n");
    movimentoTorre(5);//chama a função recursiva dando um valor pra variável/quantidade de repetições para-casas

    printf("\n");
    printf("Movimento bispo\n");
    movimentoBispo(1, 5);//da os valores da quantidade de vezes que cada função vai repetir(1 loop externo - vertical)
                                                                                        // (2 loop interno - horizontal)

    printf("\n");
    printf("Movimento rainha\n");
    movimentoRainha(8);//chama a função recursiva dando um valor pra variavel/quantidade de repetições para-casas

    printf("\n");
    printf("Movimento cavalo\n");
    movimentoCavalo();//chama a função recursiva uma vez

    return 0;
}