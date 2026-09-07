#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;
// Take the number from the user
    printf("Enter a number: ");
    scanf("%d", &n);
    
// Calculate factorial using a loop
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    
 // Display the calculated factorial
    printf("Factorial = %lld\n", fact);

    return 0;
}
