#include <stdio.h>
#include <math.h>

int main() {
    double num;
    do {
        printf("Enter a non-negative number: ");
        scanf("%lf", &num);

        if (num < 0)
            printf("Invalid input! Number cannot be negative.\n");

    } while (num < 0); 

  
    double result = sqrt(num);
    printf("Square root of %.2lf is %.2lf\n", num, result);

    return 0;
}
