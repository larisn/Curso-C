#include <stdio.h>

int main(){
    
    int dado = 10;
    printf("Dado antes do incremento: %d.\n", dado);

    dado++;
    printf("Depois do incremento %d.\n",dado);

    dado--;
    printf("Depois do incremento %d.\n",dado);

    dado += 3;
    printf("Depois do incremento em 3 unidades %d.\n",dado);

    dado -= 2;
    printf("Depois do incremento em 2 unidades %d.\n",dado);

    dado *= 10;
    printf("Depois dde multiplicar por 10 %d.\n",dado);

}
