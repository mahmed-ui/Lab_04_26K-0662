#include <stdio.h>

int main() {
    int size;

    printf("Select a size option (1 for Small, 2 for Medium, 3 for Large): ");
    scanf("%d", &size);

    if (size == 1) {
        printf("Small size selected\n");
    } else if (size == 2) {
        printf("Medium size selected\n");
    } else if (size == 3) {
        printf("Large size selected\n");
    } else {
        printf("Invalid size.\n");
    }

    return 0;
}

