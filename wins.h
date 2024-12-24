#ifndef WINS_H
#define WINS_H

#include <stdio.h>
#include <string.h>
#include <ncurses.h>

enum colors
{
    WHITE, GREEN, YELLOW, RED
};

class Warning_Win
{
    private:
        int win_shape[2];   // (height, width)
        int win_pos[2];     // (y, x)
        WINDOW *win;
    public:
        Warning_Win(int height, int width, int y, int x);
        void win_show(char *str, int color);
        void win_clear();
};

#endif