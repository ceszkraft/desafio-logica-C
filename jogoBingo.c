#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 99

struct cartela
{
    int numeracao[10];

} objCartela;

int main()
{
    int qntCartelas, contador = 1, j = 1,  i =1;
    srand(time(NULL));

    printf("Quantidade de cartelas em jogo: \n");
    scanf("%d", &qntCartelas);

    for(i = 1; i < qntCartelas + 1; i++){
        while(i == j){
            j = rand() % MAX;
        }
            puts("");
            printf("\nCartela Numero: %d\n", contador++);
            

        for (j = 1; j <= 10; j++){
            objCartela.numeracao[j] = rand() % MAX;
            if(j == i || objCartela.numeracao[j] == objCartela.numeracao[i])
            {
                objCartela.numeracao[j] = rand() % MAX;
            }

            printf("%d \t", objCartela.numeracao[j]);
 
        }
    }
}
