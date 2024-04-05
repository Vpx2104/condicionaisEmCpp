#include <iostream>

int main() {
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    if (num %2 == 0) {
        printf("o numero digitado é par.\n");
    }
    else {
        printf("o numero digitado é impar\n");
    }
    return 0;
}