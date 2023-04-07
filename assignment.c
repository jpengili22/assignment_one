#include <stdio.h>
#include <math.h>

double sum(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    return num1 / num2;
}

double square_root(double num) {
    return sqrt(num);
}

double power(double num, double p) {
    return pow(num, p);
}

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter the numbers: ");
    scanf("%lf", &num1);
    scanf("%lf", &num2);

    printf("Choose an operator (+, -, *, /, s, p): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = sum(num1, num2);
            printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: division by zero");
                return 1;
            }
            result = divide(num1, num2);
            printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            break;
        case 's':
            if (num1 < 0) {
                printf("Error: square root of negative number");
                return 1;
            }
            result = square_root(num1);
            printf("sqrt(%.2lf) = %.2lf", num1, result);
            break;
        case 'p':
            result = power(num1, num2);
            printf("%.2lf ^ %.2lf = %.2lf", num1, num2, result);
            break;
        default:
            printf("Invalid operator");
            return 1;
    }

    return 0;
}
