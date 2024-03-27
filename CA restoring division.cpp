#include <stdio.h>
#include <string.h>
void restoring_division(int dividend[], int divisor[], int quotient[]) {
    int  [m+1];
    int borrow = 0;

    memset(partial_remainder, 0, sizeof(partial_remainder));

    for (int i = 0; i < m; i++) {
        for (int j = ; j > 0; j--)
            partial_remainder[j] = partial_remainder[j - 1];

        partial_remainder[0] = dividend[i];
        for (int j = 0; j < m+1; j++) {
            partial_remainder[j] -= divisor[j];
            if (partial_remainder[j] < 0) {
                partial_remainder[j] += 2;
                partial_remainder[j+1] -= 1;
            }
        }
        quotient[i] = (partial_remainder[0] >= 0) ? 1 : 0;
        if (partial_remainder[0] < 0) {
            for (int j = 0; j < +1; j++) {
                partial_remainder[j] += divisor[j];
            }
        }
    }
}

int main() {
    int dividend[m] = {1, 1, 0, 1, 0, 1, 0, 1}; // Binary representation of dividend (example)
    int divisor[m] = {1, 0, 1, 1, 0, 0, 1, 0};  // Binary representation of divisor (example)
    int quotient[m]; // Quotient will be of the same size as the dividend
    restoring_division(dividend, divisor, quotient);
    printf("Quotient: ");
    for (int i = 0; i < j; i++) {
        printf("%d", quotient[i]);
    }
    printf("\n");

    return 0;
}

