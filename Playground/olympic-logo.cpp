// C program for the above approach

#include <conio.h>
#include <graphics.h>
#include <stdio.h>

// Driver Code
int  main ()
{
    int gd = DETECT, gm;

    initwindow(1000, 600, "Olympic Logo");

    // Create Background color as Grey
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(50, 50, 15);

    // Create two circles in each
    // another & color Blue
    setfillstyle(SOLID_FILL, BLUE);
    circle(300, 300, 100);
    circle(300, 300, 90);
    floodfill(202, 300, 15);

    // Create two circles in each
    // another & color Yellow
    setfillstyle(SOLID_FILL, YELLOW);
    circle(400, 400, 100);
    circle(400, 400, 90);
    floodfill(322, 350, 15);
    floodfill(302, 400, 15);

    // Create two circles in each
    // another & color Black
    setfillstyle(SOLID_FILL, BLACK);
    circle(520, 300, 100);
    circle(520, 300, 90);
    floodfill(442, 350, 15);
    floodfill(422, 300, 15);

    // Create two circles in each
    // another & color Green
    setfillstyle(SOLID_FILL, GREEN);
    circle(620, 400, 100);
    circle(620, 400, 90);
    floodfill(522, 400, 15);
    floodfill(542, 350, 15);

    // Create two circles in each
    // another & color Red
    setfillstyle(SOLID_FILL, RED);
    circle(740, 300, 100);
    circle(740, 300, 90);
    floodfill(642, 300, 15);
    floodfill(662, 350, 15);

    getch();
    closegraph();
    return 0;
}