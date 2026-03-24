#include <stdio.h>
float add(float a, float b) {
    return a + b;
}
float subtract(float a, float b) {
    return a - b;
}
float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    if (b == 0) {
        printf("Division by zero error");
        return 0;
    }
    return a / b;
}
int main() {
    float num1, num2;
    char choice;
    scanf("%f %f %c", &num1, &num2, &choice);
    switch (choice) {
        case '+':
            printf("%.f", add(num1, num2));
            break;
        case '-':
            printf("%.f", subtract(num1, num2));
            break;
        case '*':
            printf("%.f", multiply(num1, num2));
            break;
        case '/':
            printf("%.f", divide(num1, num2));
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}