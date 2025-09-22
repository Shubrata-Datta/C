// #include <stdio.h>
// void printDescending(int n);
// void printAlternating(int n);

// void printDescending(int n)
// {
//     if (n <= 0) return;
//     printf("D%d ", n); // Descending
//     printAlternating(n - 1);
//     printf("D%d ", n);
// }
// void printAlternating(int n)
// {
//     if (n <= 0) return;
//     printf("A%d ", n); // Alternating
//     printDescending(n - 2);
//     printf("A%d ", n);
// }
// int main()
// {
//     printDescending(4);
//     return 0;
// }

// #include <stdio.h>
void processEven(int n);
void processOdd(int n);

void processEven(int n)
{
    if (n <= 0) return;
    printf("E%d ", n); // Even
    processOdd(n - 1);
    printf("E%d ", n);
}

void processOdd(int n)
{
    if (n <= 0) return;
    printf("O%d ", n); // Odd
    processEven(n / 2);
    printf("O%d ", n);
}

int main()
{
    processEven(6);
    return 0;
}
