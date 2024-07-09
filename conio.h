#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 3 /* Rubik's cube = 3x3*/
#define SIDES 6 /* 6 cotés pour le cube */

typedef int side_type[N][N];
typedef side_type cube_type[SIDES];
/*
#define FRONT 2
#define RIGHT 3*/



/*
 * #define BACK 4
#define LEFT 1
#define DOWN 5*/
#define CLOCKWISE 0
#define ANTICLOCKWISE 1
#define U 0
#define L 1
#define F 2
#define R 3
#define B 4
#define D 5

#define WHITE   0
#define ORANGE   1
#define GREEN   2
#define RED   3
#define BLUE   4
#define YELLOW   5






#pragma once

/*enum COLORS
{
    BLACK = 0,
    BLUE = 1,
    GREEN = 2,
    CYAN = 3,
    RED = 4,
    MAGENTA = 5,
    BROWN = 6,
    LIGHTGRAY = 7,
    DARKGRAY = 8,
    LIGHTBLUE = 9,
    LIGHTGREEN = 10,
    LIGHTCYAN = 11,
    LIGHTRED = 12,
    LIGHTMAGENTA = 13,
    YELLOW = 14,
    WHITE = 15,
    BLINK = 128
};*/

enum CURSORTYPE
{
    _NOCURSOR,//     turns off the cursor
    _SOLIDCURSOR,//  solid block cursor
    _NORMALCURSOR // normal underscore cursor
};

struct text_info
{
    unsigned char attribute;      /* text attribute */
    unsigned char normattr;       /* normal attribute */
    int screenheight;   /* text screen's height */
    int screenwidth;    /* text screen's width */
    int curx;           /* x-coordinate in current window */
    int cury;           /* y-coordinate in current window */
};



int   c_getch(void);
int   c_getche(void);
int   c_kbhit(void);

void  c_clrscr();
void  c_gotoxy(int x, int y);
void  c_setcursortype(int cur_t);
void  c_textbackground(int newcolor);
void  c_textcolor(int newcolor);
int   c_wherex(void);
int   c_wherey(void);
void  c_gettextinfo(struct text_info *r);
void  c_textattr(int newattr);