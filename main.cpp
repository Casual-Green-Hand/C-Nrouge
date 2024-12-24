#include <stdio.h>
#include <ncurses.h>

#include "player.h"
#include "wins.h"

char meg[100] = "Hello,world";

int main()
{
    stdscr = initscr();
    Warning_Win w_win = Warning_Win(4, 50, 5, 5);
    w_win.win_show(meg, WHITE);
    endwin();
    return 0;
}