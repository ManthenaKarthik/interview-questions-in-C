#include <stdio.h>

int main() 
{

    int number;
    printf("enter the number :");
    scanf("%d",&number);
    // Declare a character pointer to store the result string
    const char* result; 

    // Use the conditional operator to assign a value to the 'result' variable
    result = (number % 2 == 0) ? "Even" : "Odd"; 

    // Print the result
    printf("The number %d is %s.\n", number, result);

    return 0;
}
