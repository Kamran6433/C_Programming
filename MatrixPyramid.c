#include <stdio.h>

int main(void) {

    int rows, columns, n;
    printf("How many rows do you want?\n");
    scanf(%d, &n);

    for (rows = 1; rows < n; rows++) {

        for (columns = 1; columns <= 2 * n -1; columns++) {

            if (columns >= n - (rows - 1) && columns <= n + (i - 1)) {
                printf("*");
            }
            else {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}