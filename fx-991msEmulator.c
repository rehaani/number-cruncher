#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function Prototypes
void basicOperations();
void trigonometricFunctions();
void logarithmicFunctions();
void statisticalFunctions();
void powerRootFunctions();
void combinatoricsFunctions();
void integrationDifferentiation();
void baseConversion();

int main() {
    int choice;

    while (1) {
        printf("\n--- Scientific Calculator ---\n");
        printf("1. Basic Operations (+, -, *, /)\n");
        printf("2. Trigonometric Functions\n");
        printf("3. Logarithmic & Exponential Functions\n");
        printf("4. Power & Root Functions\n");
        printf("5. Statistical Functions\n");
        printf("6. Combinatorics (nPr, nCr)\n");
        printf("7. Integration/Differentiation\n");
        printf("8. Base-N Conversion\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: basicOperations(); break;
            case 2: trigonometricFunctions(); break;
            case 3: logarithmicFunctions(); break;
            case 4: powerRootFunctions(); break;
            case 5: statisticalFunctions(); break;
            case 6: combinatoricsFunctions(); break;
            case 7: integrationDifferentiation(); break;
            case 8: baseConversion(); break;
            case 9: exit(0);
            default: printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}

// Function Definitions

void basicOperations() {
    double a, b, result;
    char op;
    printf("Enter an operation (+, -, *, /):\n ");
    scanf(" %c", &op);
    printf("Enter two numbers:\n ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = (b != 0) ? a / b : NAN; break;
        default: printf("Invalid operation.\n"); return;
    }
    printf("Result: %.2lf\n", result);
}

void trigonometricFunctions() {
    double angle, result;
    char func[10];
    printf("Enter function (sin, cos, tan, sinh, cosh, tanh):\n ");
    scanf("%s", func);
    printf("Enter angle in radians:\n ");
    scanf("%lf", &angle);

    if (strcmp(func, "sin") == 0) result = sin(angle);
    else if (strcmp(func, "cos") == 0) result = cos(angle);
    else if (strcmp(func, "tan") == 0) result = tan(angle);
    else if (strcmp(func, "sinh") == 0) result = sinh(angle);
    else if (strcmp(func, "cosh") == 0) result = cosh(angle);
    else if (strcmp(func, "tanh") == 0) result = tanh(angle);
    else {
        printf("Invalid function.\n");
        return;
    }
    printf("Result: %.2lf\n", result);
}

void logarithmicFunctions() {
    double x, result;
    char func[5];
    printf("Enter function (ln, log, exp):\n ");
    scanf("%s", func);
    printf("Enter the value:\n ");
    scanf("%lf", &x);

    if (strcmp(func, "ln") == 0) result = log(x);
    else if (strcmp(func, "log") == 0) result = log10(x);
    else if (strcmp(func, "exp") == 0) result = exp(x);
    else {
        printf("Invalid function.\n");
        return;
    }
    printf("Result: %.2lf\n", result);
}

void powerRootFunctions() {
    double x, y, result;
    char func[5];
    printf("Enter function (pow, sqrt, cbrt):\n ");
    scanf("%s", func);

    if (strcmp(func, "pow") == 0) {
        printf("Enter base and exponent:\n ");
        scanf("%lf %lf", &x, &y);
        result = pow(x, y);
    } else if (strcmp(func, "sqrt") == 0) {
        printf("Enter value: ");
        scanf("%lf", &x);
        result = sqrt(x);
    } else if (strcmp(func, "cbrt") == 0) {
        printf("Enter value: ");
        scanf("%lf", &x);
        result = cbrt(x);
    } else {
        printf("Invalid function.\n");
        return;
    }
    printf("Result: %.2lf\n", result);
}

void statisticalFunctions() {
    int n, i;
    double sum = 0, mean, variance = 0, stddev;
    printf("Enter the number of elements:\n ");
    scanf("%d", &n);
    double data[n];
    printf("Enter the data points:\n ");
    for (i = 0; i < n; i++) {
        scanf("%lf", &data[i]);
        sum += data[i];
    }
    mean = sum / n;
    for (i = 0; i < n; i++) {
        variance += pow(data[i] - mean, 2);
    }
    variance /= n;
    stddev = sqrt(variance);
    printf(" Mean: %.2lf,\n Variance: %.2lf,\n Standard Deviation: %.2lf\n", mean, variance, stddev);
}

void combinatoricsFunctions() {
    int n, r;
    double nPr, nCr;
    printf("Enter n and r (n >= r):\n ");
    scanf("%d %d", &n, &r);

    if (n < r) {
        printf("Invalid input. n must be >= r.\n");
        return;
    }

    nPr = tgamma(n + 1) / tgamma(n - r + 1);
    nCr = nPr / tgamma(r + 1);

    printf(" nPr: %.0lf,\n nCr: %.0lf\n", nPr, nCr);
}

void integrationDifferentiation() {
    printf("Numerical integration and differentiation require symbolic processing not natively available in C. \nYou can use libraries or external tools like MATLAB for such tasks.\n");
}

void baseConversion() {
    int num, base;
    printf("Enter a number and target base (2, 8, 10, 16):\n ");
    scanf("%d %d", &num, &base);

    if (base == 2) printf("Binary: %b\n", num);
    else if (base == 8) printf("Octal: %o\n", num);
    else if (base == 10) printf("Decimal: %d\n", num);
    else if (base == 16) printf("Hexadecimal: %X\n", num);
    else printf("Invalid base.\n");
}
