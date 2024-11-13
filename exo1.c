#include <stdio.h>

int main() {
    int n, i;
    float sum, term;
    i = 1;
    sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n) {
        term = (float)1/i;
        sum += term;
        printf("1/%d", i);
        if (i < n) {
            printf(" + ");
        }
        else {
            printf(" = %f\n", sum);
        }
        i++;
    }
    return 0;
}
