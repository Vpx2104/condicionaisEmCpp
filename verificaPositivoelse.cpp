#include <iostream>

int main(){
    int num;

    printf("digite um numero");
    scanf("%d", &num);

    if (num > 0) {
        printf("o numero digitado é positivo\n");
    }
    else {
        printf("o numero digitado é negativo\n");
    }

    return 0;
}