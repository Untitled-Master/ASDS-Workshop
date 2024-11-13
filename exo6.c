#include <stdio.h>

int main() {
    int i, j, number, sum;
    sum = 0;
    i = 1;
    j = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The first %d even numbers are:\n", number);
    while (i <= number) {
        if (j % 2 == 0) {
            printf("%d\t", j);
            sum += j;
            i++;
        }
        j++;
    }
    printf("\n");
    printf("The sum of even numbers from 1 to %d is %d\n", number, sum);
    return 0;
}
