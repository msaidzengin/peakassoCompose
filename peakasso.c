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

    int rectangles[4][4] = {
        {2, 2, 5, 1},
        {3, 2, 7, 2},
        {5, 7, 2, 4},
        {8, 8, 1, 1}
    };
    int rectSize = sizeof(rectangles)/sizeof(rectangles[0]);

    printf("PROGRAM mypeakasso; !! The number of PAINT-CANVAS statements is %d\n", rectSize);
    printf("CANVAS-INIT-SECTION :\n");
    printf("CONST CanvasX = %d ; CONST CanvasY = %d ; CursorX = %d ; CursorY = %d ;\n", x, y, rectangles[0][0], rectangles[0][1]);
    printf("BRUSH-DECLARATION-SECTION : !! Declare brushes\n");
    printf("BRUSH ");
    for(int i = 0; i < rectSize; i++) {
        if (i == rectSize - 1) printf("b%d = %d %d; \n\n", (i+1), rectangles[i][2], rectangles[i][3]);
        else printf("b%d = %d %d, ", (i+1), rectangles[i][2], rectangles[i][3]);
    }
    printf("DRAWING-SECTION : !! Start drawing\n");
    printf("PAINT-CANVAS b1;\n");
    for(int i = 1; i < rectSize; i++) {
        printf("MOVE CursorX TO %d ;\n", rectangles[i][0]);
        printf("MOVE CursorY TO %d ;\n", rectangles[i][1]);
        printf("PAINT-CANVAS b%d;\n", (i+1));
    }
    printf("EXHIBIT-CANVAS;\n");

    return 0;
}