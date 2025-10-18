#include <stdio.h>

int main() {
    int amount, noteCount = 0;
    int denominations[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int noteUsed[9] = {0};

    printf("Enter the amount: ");
    scanf("%d", &amount);

    for (int i = 0; i < 9; i++) {
        if (amount >= denominations[i]) {
            noteUsed[i] = amount / denominations[i];
            amount = amount % denominations[i];
            noteCount += noteUsed[i];
        }
    }

    printf("\nMinimum number of notes required: %d\n", noteCount);
    printf("Notes used:\n");
    for (int i = 0; i < 9; i++) {
        if (noteUsed[i] != 0) {
            printf("₹%d x %d\n", denominations[i], noteUsed[i]);
        }
    }

    return 0;
}
