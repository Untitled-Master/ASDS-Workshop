#include <stdio.h>

int main() {
    int i, j, space, rows;
    j = 0;
    i = 1;
    rows = 5;
    while (i <= rows) {
        if(i%2 != 0) {
            space = rows - i;
            space = space/2;
            for (int k = 0; k < space; k++) {
                printf(" ");
            }
            for (j = i; j > 0; j--) {
                printf("*");
            }
            printf("\n");
        }

        i++;
    }
    return 0;
}
