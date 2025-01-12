#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the a\n1-Draw a circle\n2-Draw a triangle\n3-Draw a square\n4-Exit\n");
    scanf("%d", &a);

    switch (a) {
        case 1: // Draw a circle
            printf("Enter the radius of the circle\n");
            scanf("%d", &b);

            for (int d = 0; d < b; d++) {
                printf(" ");
            }
            for (int d = 0; d < b; d++) {
                printf("*");
            }
            for (int d = 0; d < b; d++) {
                printf(" ");
            }
            printf("\n");

            for (int j = 0; j < b; j++) {
                printf("*");
                for (int d = 0; d < b; d++) {
                    printf("   ");
                }
                printf("*\n");
            }

            for (int d = 0; d < b; d++) {
                printf(" ");
            }
            for (int d = 0; d < b; d++) {
                printf("*");
            }
            for (int d = 0; d < b; d++) {
                printf(" ");
            }
            printf("\n");
            break;

        case 2: // Draw a triangle
            printf("Enter the base and height of the triangle\n");
            scanf("%d", &b);

            for (int j = 0; j < b; j++) {
                printf("|");
                for (int d = 0; d < j; d++) {
                    printf(" ");
                }
                printf("\\\n");
            }
            for (int j = 0; j < b + 1; j++) {
                printf("-");
            }
            printf("\n");
            break;

        case 3: // Draw a square
            printf("Enter the side length of the square\n");
            scanf("%d", &b);

            for (int j = 0; j < 5 * b + 1; j++) {
                printf("-");
            }
            printf("\n");

            for (int j = 0; j < b; j++) {
                printf("|");
                for (int d = 0; d < 5 * b - 1; d++) {
                    printf(" ");
                }
                printf("|");
                printf("\n");
            }

            for (int j = 0; j < 5 * b + 1; j++) {
                printf("-");
            }
            printf("\n");
            break;

        case 4: // Exit
            printf("Exit\n");
            break;

        default:
            printf("Invalid choice. Please select a valid option.\n");
            break;
    }

    return 0;
}