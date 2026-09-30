#include <stdio.h>

void pyramid(int row) {
    for(int i = 1;i <= row;i++) {
        for(int j = row;j > 0;j--) {
            if(j > i) {
                printf(" ");
            }
            else {
                printf("#");
            }
        }
        printf("  ");
        for(int k = 1;k <= i;k++) {
            printf("#");
        }
        printf("\n");
    }
}

int main() {
    int row;
    do {
        printf("How many rows: ");
        if(scanf("%d", &row) != 1) {
            while(getchar() != '\n');
        }
    } while(row <= 0 || row >= 9);
    pyramid(row);
    return 0;
}
