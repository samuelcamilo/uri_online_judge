#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int cont = 0;

    for(cont = 0; cont < 10; cont++){
        scanf("%d", &vetor[cont]);
    }

    for(cont = 0; cont < 10; cont++){
        if(vetor[cont] <= 0){
            vetor[cont] = 1;
        }
        printf("X[%d] = %d\n", cont, vetor[cont]);
    }

    return 0;
}
