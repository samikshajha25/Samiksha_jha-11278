#include <stdio.h>

int main() {
    int i;

    printf("Demonstrating continue:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;   
        }
        printf("%d ", i);
    }

    printf("\n\nDemonstrating break:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 7) {
            break;      
        }
        printf("%d ", i);
    }

    return 0;
}
