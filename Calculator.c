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
        } else if (op == '*') {
            result *= num;
        } else if (op == '/') {
            if (num == 0) {
                printf("Cannot divide by 0. \n");
                return 0;
        }
            result /= num;
        }
        else if (op == '%') {
            result = result * num / 100;
        }
         else {
            printf("Incorrect mark\n");
            return 0;
        }
    }

    printf("result = %.2f\n", result);
    return 0;
}
