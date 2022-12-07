#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[999];
    int insere = 1;
    int tam=0;
    int busca=0;
    int repetiu=0;
    while (insere>0){
        printf("Digite um valor: ");
        scanf("%d", &sla);
        n[tam] = sla;
        tam++;
    }
    printf("Digite um valor para a busca: ");
    scanf("%d", &busca);
    for(int cont = 0; cont<tam; cont++){
        if (busca == n[cont]){
            repetiu++;
        }
    }
    printf("O valor %d foi digitado %d vezes", busca, repetiu);
}
