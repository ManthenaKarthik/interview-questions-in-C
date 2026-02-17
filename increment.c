#include <stdio.h>

int main() {
    int x = 5;
    int y = 5;
    int result_prefix, result_postfix;

    // --- Prefix Increment ---
    // x is incremented to 6 first, then the new value (6) is assigned to result_prefix
    result_prefix = ++x;
    printf("--- Prefix Increment (result_prefix = ++x) ---\n");
    printf("Value of result_prefix: %d\n", result_prefix); // Output: 6
    printf("Value of x after prefix: %d\n\n", x);           // Output: 6

    // --- Postfix Increment ---
    // The current value of y (5) is assigned to result_postfix first,
    // then y is incremented to 6 afterward
    result_postfix = y++;
    printf("--- Postfix Increment (result_postfix = y++) ---\n");
    printf("Value of result_postfix: %d\n", result_postfix); // Output: 5
    printf("Value of y after postfix: %d\n", y);             // Output: 6

    return 0;
}
