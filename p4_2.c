#include <stdio.h>
#include <stdbool.h>

bool isPrime(int x) {
    if (x < 2)
        return false;     
    if (x == 2)
        return true;      
    if (x % 2 == 0)
        return false;     

    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0)
            return false;   
    }
    return true;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf_s("%d", &n);

    if (isPrime(n))
        printf("%d is prime.\n", n);
    else
        printf("%d is not prime.\n", n);

    return 0;
}