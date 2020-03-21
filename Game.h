#include<bits/stdc++.h>

#ifndef GAME_H
#define GAME_H
using namespace std;


class Game
{
    public:

        Game();
        static void about_ginger();
        void help();
        void game_mode();
        string predict_command(string command, vector<string>actual_commands);
        virtual ~Game();

//total commands available in ginger game mode
    vector<string>actual_commands;
    vector<string>available_games;

};


#endif // GAME_H
