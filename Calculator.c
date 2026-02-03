#include <stdio.h>

int main() {
    float result, num;
    char op;

    printf("Enter the numbers to calculate.\n");

    scanf("%f", &result);
    while (scanf(" %c", &op) == 1 && op != '=') {
        scanf("%f", &num);

        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        } else {
            printf("Incorrect mark\n");
            return 0;
        }
    }

    printf("result = %.2f\n", result);
    return 0;
}
