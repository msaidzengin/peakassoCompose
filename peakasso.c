#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d\n", &x, &y);
    char canvas[y][x];
    char dump1, dump2;

    for( int i = 0; i < sizeof(canvas)/sizeof(canvas[0]); i++) {
        for (int j = 0; j < sizeof(canvas[i])/sizeof(canvas[i][0]); j++) {
            scanf("%c", &canvas[i][j]);
        }
        scanf("%c%c", &dump1, &dump2);
    }

    for( int i = 0; i < sizeof(canvas)/sizeof(canvas[0]); i++) {
        for (int j = 0; j < sizeof(canvas[i])/sizeof(canvas[i][0]); j++) {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }

    return 0;
}