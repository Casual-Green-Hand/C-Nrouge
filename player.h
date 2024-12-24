#ifndef PLAYER_H
#define PLATER_H

#include <ncurses.h>

class Player
{
    private:
        int HP, EXP;
        int pos[2]; // (y, x)
    public:
        // Player();
        // ~Player();
        int player_move(int dy, int dx);
};

#endif