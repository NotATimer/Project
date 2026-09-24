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
        printf("\n");
    }
}

int main() {
    int row;
    printf("How many rows: ");
    scanf("%d", &row);
    pyramid(row);
    return 0;
}
