// Even number up to n and
// n even numbers and n odd numbers

#include <stdio.h>

#include <stdio.h>

int main() {
    int i = 1, n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("Even: %d, Odd: %d\n", i * 2, (i * 2 - 1));
        i++;
    }

    return 0;
}

/* // another method 
#include <stdio.h>

int main() {
    int n = 5, i = 2, count = 1;

    while (count <= n) {
        printf("%d ", i);
        
        if (count % 2 == 1) { // If count is odd, generate an even number
            i = i * 2;
        } else { // If count is even, generate an odd number
            i = i * 2 - 1;
        }

        count++;
    }

    return 0;
}
 */