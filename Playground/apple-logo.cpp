#include <graphics.h>
#include <conio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 320, y = 240;

    // Draw the main body (apple)
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x, y, 80, 80);

    // Draw the bite (overlay a black circle)
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x + 80, y-40, 40, 30);

    // Draw the leaf
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    pieslice(x, y - 80, 60, 120, 25);

    getch();
    closegraph();
    return 0;
}