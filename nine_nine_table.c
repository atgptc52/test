#include <stdio.h>

static void print_multiplication_table(int max_factor) {
    for (int i = 1; i <= max_factor; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (j > 1) {
                putchar(' ');
            }
            printf("%dx%d=%2d", j, i, i * j);
        }
        putchar('\n');
    }
}

int main(void) {
    print_multiplication_table(9);
    return 0;
}
