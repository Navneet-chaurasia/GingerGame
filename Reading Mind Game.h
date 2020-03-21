#include"Game.h"
using namespace std;

#ifndef READING MIND GAME_H
#define READING MIND GAME_H


class Reading_Mind_Game
{
    public:
        Reading_Mind_Game();
        void about_RMG();
        void help();
        virtual ~Reading_Mind_Game();
        void RMG_mode();
    vector<string>actual_commands;
    protected:

    private:
};

#endif // READING MIND GAME_H
