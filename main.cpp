#include <bits/stdc++.h>

#include"User.h"
#include"Formatter.h"
#include"Game.h"
using namespace std;


void intro();

int main()
{
    //this is a command variable
    string command;


  //formatter object
  Formatter *format = new Formatter();

  //object of Game type
  Game game;

  //object of type USER
    User *user = new User();


  //display the game title
  format->display_title();

//check if user already registered otherwise create new account
    ifstream file;

    file.open("signup.user", ios::in);

    if(file){

        format->welcome_user();
        Game::about_ginger();

    }else{

    cout<<"Hey! you are not registered"<<endl;
    cout<<"For using Ginger Game you must sign up"<<endl<<endl<<endl<<endl;


         user->write_rec();

        //welcome user after signup
         format->welcome_user();

    }

    //loop for actual game running
    while(true){

        cout<<"\n>>> ";
        cin>>command;

        command =  game.predict_command(command,game.actual_commands);

        if(command == "games"){

            format->Entering_into_mode("GAME");
            game.game_mode();

               }

        else if(command == "about"){

             format->Entering_into_mode("ABOUT");
              Game::about_ginger();
        }

        else if(command == "help"){

             format->Entering_into_mode("HELP");
             game.help();

        }
          else if(command == "profile"){

             format->Entering_into_mode("PROFILE");
             user->profile_mode();

        }else if(command == "quit"){

           cout<<"\n\n\nTATA BY BY BY......\n\n\n";
           return 0;

        }

   }

    return 0;
}







