#include <stdio.h>
#include <stdlib.h>

int conta_divisores(n){
    int d = 0;
    for (int i = 1; i<=n; i++){
        if (n%i == 0){
            d++;
        }
    }
    return d;
}

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    int r = conta_divisores(n);
    if (r > 2){
        printf("%d divisores\n nao primo", r);
    }
    else if (r <= 2){
        printf("%d divisores\n primo", r);
    }
    else{
        printf("Deu merda fio");
    }
}
