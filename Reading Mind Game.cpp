#include<bits/stdc++.h>

#include"dos.h"
#include "Reading Mind Game.h"
using namespace std;
Reading_Mind_Game::Reading_Mind_Game()
{

    actual_commands.push_back("help");
    actual_commands.push_back("about");
     actual_commands.push_back("play");
    actual_commands.push_back("quit");

}

Reading_Mind_Game::~Reading_Mind_Game()
{
    //dtor
}


//method for defining help in the Reading Mind Game
void Reading_Mind_Game::help(){

    cout<<"\n\n\n";
    cout<<"For knowing about this game enter \n\t'about'\n\n";
    cout<<"For quitting the game enter \n\t'quit'\n\n";


}

//method for defining abort method for Reading_Mind_Game
void Reading_Mind_Game :: about_RMG(){

  cout<<"Reading Mind Games is designed to read your mind."<<
    endl<<endl<<"In Reading Mind Games "<<"For Playing the game follow step by step instruction"<<endl<<
     "For quitting Reading Mind Games enter quit"<<endl<<endl<<endl;

}



//method for entering RMG game mode_t

//method for profile mode;
void Reading_Mind_Game :: RMG_mode(){

    cout<<"If you want any assistance enter help\n\n"<<endl;
    cout<<"For starting the game enter 'play' "<<endl;

    string command;

//declared object of type Game for accessing predict_command method;
        Game game;


  //you have entered into the profile mode
   while(true){

        cout<<"\n>>> ";
        cin>>command;

        command =  game.predict_command(command,actual_commands);

       if(command == "help"){

          //calling the help method
          help();

       }else if(command == "play"){

          string temp;
          cout<<"You are playing the Reading Mind Game"<<endl;

          //step 1
          cout<<"I am The MIND READER and I am Going to read your mind\n\n";
          cout<<"JUST SEE ME FOR 5 SEC.\n";
          cout<<"After you have done enter ok to let me know\n\n";
          cout<<"\n>>> ";
          cin>>temp;

          if(temp == "ok"){
            cout<<"OK! I have read your mind now I can tell you what is in your mind\n\n";
            cout<<"BUT wait let's make it fun and full of MATH\n\n";
            cout<<"Think a number between 1 and 20\n\n";
            cout<<"After you have done say ok";
            cout<<"\n>>> ";
            cin>>temp;

            if(temp == "ok"){

               cout<<"Now Add  1 into your number\n\n";
               cout<<"For example if you choose 4 than make it 4 + 1 = 5\n\n";
               cout<<"After you have done say ok";
               cout<<"\n>>> ";
               cin>>temp;

               if(temp == "ok"){

                 cout<<"Now double your new number that you got after adding 1\n\n";
                 cout<<"After you have done say ok";
                 cout<<"\n>>> ";
                 cin>>temp;

                 if(temp == "ok"){

                    cout<<"OK! Now add 4 into your new number that you got after doubling\n\n";

                   cout<<"After you have done say ok";
                   cout<<"\n>>> ";
                   cin>>temp;

                   if(temp == "ok"){

                    cout<<"Now divide this number by 2\n\n";
                    cout<<"After you have done say ok";
                    cout<<"\n>>> ";
                   cin>>temp;

                   if(temp == "ok"){

                    cout<<"OK! so now I am guessing what is in your mind\n\n";
                    cout<<"Now substract  this number with your original number\n\n";
                     cout<<"After you have done say ok";
                    cout<<"\n>>> ";
                   cin>>temp;

                   if(temp == "ok"){

                     cout<<"OK! Now I will read your mind and tell you the answer that you got after this long process\n\n";

                     //loop for some delay effects

                     cout<<"You didn't get 1 Right!\n\n";

                       for(int i = 0; i < 10000; i++)
                        for(int i = 0; i < 10000; i++);


                     cout<<"I think you didn't get 2 either Right!\n\n";

                    for(int i = 0; i < 10000; i++)
                        for(int i = 0; i < 10000; i++);
                     cout<<"So Your Answer is 3!\n\n";
                     cout<<"AM I RIGHT say yes or no\n\n";
                     cout<<"\n>>> ";
                     cin>>temp;
                     if(temp == "yes"){

                        cout<<"So that was demo of my power!!!\n\n";

                     }else{

                        cout<<"MY BAD LUCK !!!\n\n";
                     }

                   }
                   }

                   }

                 }
               }

               }

          }
       }else if(command == "about"){

           about_RMG();

            return;
       }else if(command == "quit"){

           cout<<"\nYOU ARE NOW OUT FROM YOUR READING MIND GAME\n"<<endl;

            return;
       }


   }

}
