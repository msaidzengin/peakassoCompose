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

    printf("PROGRAM mypeakasso;\n");
    printf("CANVAS-INIT-SECTION :\n");
    printf("CONST CanvasX = %d ; CONST CanvasY = %d ; CursorX = 1 ; CursorY = 1 ;\n", x, y);
    printf("BRUSH-DECLARATION-SECTION :\n");
    printf("BRUSH b1 = 5 1, b2= 7 2;");  // brushlar belirlenip for loop ile yazılacak.
    

    return 0;
}