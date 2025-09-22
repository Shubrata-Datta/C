#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10) {
        i++;
        if (i == 5) {
            continue; // Skip the rest of the loop when i is 5
        }
        printf("%d\n", i);
    }
    return 0;
}
