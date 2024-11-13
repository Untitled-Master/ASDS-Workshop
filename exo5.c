#include <stdio.h>

int main() {
    int i, number, fraction;
    printf("Entrez un nombre: ");
    scanf("%d", &number);
    fraction = number;
    while(number > 1) {
        fraction = fraction *(number - 1);
        number--;
    }
    printf("La factorielle est: %d\n", fraction);
    return 0;
}
