#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    int arr[ROWS][COLS] = {{1, 3, 5, 7},
                           {6, 7, 8, 4},
                           {0, 9 ,2, 4}};

    int min = arr[0][0];
    int max = arr[0][0];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j< COLS; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Мінімальний елемент: %d\n", min);
    printf("Максимальний елемент: %d\n", max);

    return 0;
}
