#include<bits/stdc++.h>
#include "Game.h"
#include"Formatter.h"
#include"Reading Mind Game.h"

using namespace std;

Game::Game()
{
   //entering total commands
    actual_commands.push_back("help");
    actual_commands.push_back("games");
    actual_commands.push_back("about");
    actual_commands.push_back("profile");
    actual_commands.push_back("update");
    actual_commands.push_back("quit");

    //entering total available games
    available_games.push_back("Reading Mind");
    available_games.push_back("Guess the age");
    available_games.push_back("Magical Number");
    available_games.push_back("quit");


}

Game::~Game()
{
    //dtor
}


//method for displaying about the game;
void Game :: about_ginger(){

    cout<<"Ginger Game is a console game."<<
    endl<<endl<<"In Ginger Game you can play variety of games."<<endl<<endl
    <<"For playing any game enter the name of game or Enter 'games' \nfor seeing all available games "
    <<endl<<endl<<"If you want further assistance enter 'help'"<<endl<<
     "For quitting Ginger Game enter quit"<<endl<<endl<<endl;

}

//method for printing the list of available games
void Game :: game_mode(){
  cout<<"\n\n\n";

    for(int i = 0; i < 100; i++){

    if(i < 31 || i > 61)
        cout<<"*";
    else{
          cout<<"THESE ARE AVAILABLE GAMES";
          i = 61;
    }

 }
    cout<<endl;
    cout<<endl;

   cout<<"1)\t"<<"Reading Mind"<<endl;
   cout<<"2)\t"<<"Guess the age"<<endl;
   cout<<"3)\t"<<"Magical Number"<<endl;

     cout<<endl;
     cout<<"Enter the Name of any game to play\n\n";
      cout<<"Enter quit for quitting GAME MODE\n\n";



      //this while loop listen for commands for play any game
      Formatter  formatter;
      string command;
    while(true){

        cout<<"\n>>> ";
        cin>>command;

        command =  predict_command(command,available_games);

       if(command == "Reading Mind"){
         Reading_Mind_Game RMG;
          formatter.Entering_into_mode("READING MIND GAME MODE");
          RMG.RMG_mode();

       }else if(command == "Guess the age"){

         formatter.Entering_into_mode("GUESS THE AGE GAME MODE");

       }else if(command == "Magical Number"){

           formatter.Entering_into_mode("MAGICAL NUMBER GAME");

       }else if(command == "quit"){

           cout<<"\nYOU ARE NOW OUT GAME MODE\n"<<endl;

            return;
       }
     }
}

//method for help
void Game :: help(){

    cout<<"\n\n\n";
    cout<<"For Entering into your profile mode enter \n\t'profile'\n\n";
    cout<<"In profile mode for updating your name enter \n\t'update'\n\n";
    cout<<"For quitting profile mode enter \n\t'quit'\n\n";

    cout<<"For seeing available games enter \n\t'games'\n\n";
    cout<<"For playing any game enter the game name\n";
    cout<<"For quitting Ginger Game enter \n\t'quit'\n\n";
  }


//utility function of predict_command method
/* Utility function to get max of 2 integers */
int max(int a, int b)
{
	return (a > b) ? a : b;
}

//testing for lcs
/* Dynamic Programming C/C++ implementation of LCS problem */


/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs(string X, string Y, int m, int n)
{
	int L[m + 1][n + 1];
	int i, j;

	/* Following steps build L[m+1][n+1] in bottom up fashion. Note
	that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
	for (i = 0; i <= m; i++) {
		for (j = 0; j <= n; j++) {
			if (i == 0 || j == 0)
				L[i][j] = 0;

			else if (X[i - 1] == Y[j - 1])
				L[i][j] = L[i - 1][j - 1] + 1;

			else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}

	/* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
	return L[m][n];
}

//method for predicting commands
string Game :: predict_command(string command, vector<string>actual_commands){

 //vector for storing scores
    vector<int>prediction_scores;

//loop through all commands
  for(int i = 0; i < actual_commands.size(); i++){

    prediction_scores.push_back(lcs(actual_commands[i], command, actual_commands[i].size(), command.size()));

  }

     //find index of max predict command
    int max_index = 0;
    int max_ = prediction_scores[0];

	  for(int i = 0; i < prediction_scores.size()-1; i++){

        if(max_< prediction_scores[i+1]){

              max_index = i+1;
              max_ = prediction_scores[i+1];
        }
         }

  return actual_commands[max_index];

}


