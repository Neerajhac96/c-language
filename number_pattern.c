#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    // Display menu
    printf("Basic Calculator\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exit\n");

    // Get user choice
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        // Get numbers for calculation
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
    }

    switch (choice) {
        case 1: // Addition
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case 2: // Subtraction
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case 3: // Multiplication
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case 4: // Division
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case 5: // Exit
            printf("Exiting the program. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Please select a valid option.\n");
    }

    return 0;
}
