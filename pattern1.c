#include <stdio.h>

int main() {
    int n = 5;  // Number of rows

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
       
            if (j == 1 || j == i || i == n)
                printf("*");
            else
                printf(" ");  
            printf(" "); 
        }
        printf("\n");
    }

    return 0;
}
