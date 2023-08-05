#include <stdio.h>

//addition function 
int add(int x, int y) {
    return x + y;
}

//subtract function
int sub(int x, int y) {
    return x - y;
}

//multiple function
int multi(int x, int y) {
    return x * y;
}

//divition function
int divi(int x, int y) {
    return x / y;
}

int calculate(char operato, int x, int y) {
    int result = 0;

    switch (operato) {
        case '+':
            result = add(x, y);
            break;
        case '-':
            result = sub(x, y);
            break;
        case '*':
            result = multi(x, y);
            break;
        case '/':
            result = divi(x, y);
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }
    return result;
}

int main() {
    int x, y, result;
    char operato;

     	printf("-: INFINITE CALCULATOR :-\n");
    while (1) {
        printf("Enter the first number: ");
        scanf("%d", &x);

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operato);

        printf("Enter the second number: ");
        scanf("%d", &y);

        result = calculate(operato, x, y);
        printf("Result: %d\n", result);
    }
    return 0;
}
