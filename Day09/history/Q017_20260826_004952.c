#include <stdio.h>
#include <math.h> // Required for sqrt()

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    // Prompt user for coefficients
    printf("Enter coefficients a, b and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    // Edge case: If a is 0, it is a linear equation, not quadratic
    if (a == 0) {
        if (b == 0) {
            printf("Invalid equation: No roots exist.\n");
        } else {
            printf("Linear equation detected. Single root: %.2lf\n", -c / b);
        }
        return 0;
    }

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Characterize and find roots based on the discriminant
    if (discriminant > 0) {
        // Case 1: Real and Distinct Roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("Characterization: Roots are Real and Distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } 
    else if (discriminant == 0) {
        // Case 2: Real and Equal Roots
        root1 = root2 = -b / (2 * a);
        
        printf("Characterization: Roots are Real and Equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } 
    else {
        // Case 3: Complex/Imaginary Roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("Characterization: Roots are Complex (Imaginary) and Distinct.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}