#include <stdio.h>

int main() {
    int rows, i, number;
    rows = 5;
    i = 1;
    number = 0;
    while (i <= rows) {
        number = number*10 + i;
        printf("%d\n", number);
        i++;
    }
    return 0;
}
