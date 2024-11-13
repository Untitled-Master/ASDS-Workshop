#include <stdio.h>

int main() {
    int i, j;
    j = 0;
    i = 1;
    while (i <= 5) {
        for (j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
        i++;
    }
    return 0;
}
