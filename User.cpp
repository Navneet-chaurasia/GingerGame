#include<bits/stdc++.h>

#include "User.h"
#include"Game.h"

using namespace std;
User :: User(){

    actual_profile_commands.push_back("help");
    actual_profile_commands.push_back("about");
    actual_profile_commands.push_back("profile");
    actual_profile_commands.push_back("update");
    actual_profile_commands.push_back("name");
    actual_profile_commands.push_back("scores");
    actual_profile_commands.push_back("quit");

}

void User::read_data()
{
    cout<<"\nEnter Your Name: ";
    cin>>name;

    cout<<"Enter password: ";
    cin>>password;

    cout<<endl;
}

void User::write_rec()
{
    ofstream outfile;
    outfile.open("signup.user", ios::binary);
    read_data();
    outfile.write(reinterpret_cast<char*>(this), sizeof(*this));

    outfile.close();

}



//method for updating user name
void User :: updateName(){

    fstream iofile;
    iofile.open("signup.user", ios::trunc);



    iofile.open("signup.user", ios::out|ios::in|ios::binary);

    if(!iofile)
    {
        cout<<"\nError in opening! File Not Found!!"<<endl;
        return;
    }

    read_data();
    iofile.write(reinterpret_cast<char*>(this), sizeof(*this));

    cout<<"\n\nName Successfully updated\n\n";
    iofile.close();

}

//method for getting name
string User :: getName(){

fstream infile;
    infile.open("signup.user");
    if(!infile)
    {
        cout<<"Error in Opening! File Not Found!!"<<endl;
        return "error";
    }

   while(!infile.eof())
    {        if(infile.read(reinterpret_cast<char*>(this), sizeof(*this)))
        {
            return name;
        }
    }


    infile.close();



}


//method for getting password
char* User :: getPassword(){

ifstream infile;
    infile.open("signup.user", ios::binary);
    if(!infile)
    {
        cout<<"Error in Opening! File Not Found!!"<<endl;
        return "error";
    }

    while(!infile.eof())
    {
        if(infile.read(reinterpret_cast<char*>(this), sizeof(*this))>0)
        {

        }
    }
    infile.close();

    return password;

}



//method for profile mode;
void User :: profile_mode(){

    cout<<"If you want any assistance enter help"<<endl;

    string command;

//declared object of type Game for accessing predict_command method;
        Game game;
        User user;

  //you have entered into the profile mode
   while(true){

        cout<<"\n>>> ";
        cin>>command;

        command =  game.predict_command(command,actual_profile_commands);

       if(command == "help"){

          cout<<"\n\n\n";
    cout<<"For Seeing your name enter  \n\t'name'\n\n";
    cout<<"For updating your name enter \n\t'update'\n\n";
    cout<<"For quitting profile mode enter \n\t'quit'\n\n";

       }else if(command == "update"){

           string password;
           string name;
           cout<<"\n FOR UPDATING YOUR NAME YOU NEED TO ENTER YOUR PASSWORD\n"<<endl;
           cout<<"Enter password >>> ";
           cin>>password;

           //compare entered password with actual password
           if(password == user.getPassword()){

                  cout<<"\nYou entered correct password\n"<<endl;

                    updateName();

           }

          else
              cout<<"\nYou entered wrong password\n"<<endl;



       }else if(command == "name"){

        cout<<"\nYOU ARE REGISTERD AS: "<<user.getName()<<endl;


       }
       else if(command == "scores"){

        cout<<"\nCURRENTLY NO SCORES AVAILABLE\n"<<endl;


       }else if(command == "quit"){

           cout<<"\nYOU ARE NOW OUT FROM YOUR PROFILE MODE\n"<<endl;

            break;
       }


   }

}
