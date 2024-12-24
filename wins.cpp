#include "wins.h"

Warning_Win::Warning_Win(int height, int width, int y, int x)
{
    this->win_shape[0] = height;
    this->win_shape[1] = width;
    this->win_pos[0] = y;
    this->win_pos[1] = x;
}

void Warning_Win::win_show(char *str, int color)
{
    this->win = newwin(this->win_shape[0], this->win_shape[1], this->win_pos[0], this->win_pos[1]);
    box(this->win, 0, 0);
    overwrite(this->win, stdscr);
    refresh();
    mvwaddstr(this->win, 1, win_shape[1]/2 - strlen(str)/2, str);
    wrefresh(this->win);
    refresh();
    getch();
    win_clear();
}

void Warning_Win::win_clear()
{
    wborder(this->win, ' ',' ',' ',' ',' ',' ',' ',' ');
    delwin(this->win);
    refresh();
}
