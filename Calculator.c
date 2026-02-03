#include <stdio.h>

int main() {
    float result, num;
    char op;

    printf("ป้อนตัวเลข\n");

    scanf("%f", &result);
    while (scanf(" %c", &op) == 1 && op != '=') {
        scanf("%f", &num);

        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        } else {
            printf("โปรดป้อนเครื่องหมายให้ถูกต้อง\n");
            return 0;
        }
    }

    printf("Result = %.2f\n", result);
    return 0;
}
