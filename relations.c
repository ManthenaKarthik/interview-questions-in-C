#include <stdio.h>

int main() {
    int age = 16;
    int has_parental_permission = 1; // 1 means true, 0 means false

    // Check if the person is old enough (>= 18) OR
    // if they are at least 13 AND have parental permission
    if (age >= 18 || (age >= 13 && has_parental_permission)) {
        printf("You are eligible to watch the movie.\n");
    } else {
        printf("You are not eligible to watch the movie.\n");
    }

    // Example of Logical NOT (!) operator
    if (!(age >= 18)) {
        printf("The person is not an adult.\n");
    }

    return 0;
}
