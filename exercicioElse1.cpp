#include <iostream>

int main(){
    int num;

    printf("digite um numero");
    scanf("%d", &num);

    if (num < 0) {
        printf("o numero digitado é negativo\n");
    }
    else {
        printf("o numero digitado é positivo ou zero\n");
    }

    return 0;
}