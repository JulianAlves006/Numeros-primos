#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[999];
    int sla = 1;
    int i=0;
    int b=0;
    int d=0;
    while (sla>0){
        printf("Digite um valor: ");
        scanf("%d", &sla);
        n[i] = sla;
        i++;
    }
    printf("Digite um valor para a busca: ");
    scanf("%d", &b);
    for(int c = 0; c<i; c++){
        if (b == n[c]){
            d++;
        }
    }
    printf("O valor %d foi digitado %d vezes", b, d);
}
