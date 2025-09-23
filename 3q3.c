#include <stdio.h>
//name-dorothy
//group-1a32
//date-23sep
//roll no.-1025030170

int main() {
	char name='dorothy';
	int rollno=1025030170;
    int a, b, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &op);   // space before %c to ignore newline character

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op) {
        case '+':
            printf("Result = %d\n", a+b);
            break;

        case '-':
            result = a - b;
            printf("Result = %d\n", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %d\n", result);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
else
                printf("Error: Division by zero not allowed!\n");
            break;

        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Error: Modulo by zero not allowed!\n");
            break;

        default:
            printf("Invalid operator!\n");
}}
	
