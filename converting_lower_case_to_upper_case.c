#include <stdio.h>

int main() {
    char lowercase, uppercase;
    printf("Enter a lowercase letter: ");
    scanf("%c", &lowercase);
    if (lowercase >= 'a' && lowercase <= 'z') {
        uppercase = lowercase - ('a' - 'A');
        printf("The uppercase letter is: %c\n", uppercase);
    } else {
        printf("The input is not a valid lowercase letter.\n");
    }

    return 0;
}
