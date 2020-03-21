#include<bits/stdc++.h>
using namespace std;

#include "Formatter.h"
#include"User.h"

Formatter::Formatter()
{

}

Formatter::~Formatter()
{
    //dtor
}
//method for displaying intro
void Formatter :: display_title(){
//title_margin

 for(int i = 0; i < 100; i++){

    if(i < 31 || i > 61)
        cout<<"*";
    else{
          cout<<" WELCOME TO THE GINGER GAME ";
          i = 61;
    }

 }
    cout<<endl;
 for(int i = 0; i < 97; i++){

    if(i < 31 || i > 58)
        cout<<"*";
    else
        cout<<" ";
 }

     cout<<endl;
 for(int i = 0; i < 97; i++){

       if(i < 31 || i > 58)
                cout<<"*";
    else
        cout<<" ";
 }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

}

//welcome greeting for user
 void Formatter :: welcome_user(){

     User *user = new User();

     for(int i = 0; i < 100; i++){

    if(i < 31 || i > 61)
        cout<<"*";
    else{
          cout<<" WELCOME "<<user->getName()<<" IN GINGER GAME";
          i = 61;
    }

 }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

   free(user);


 }


 //enter into help mode intro
 void Formatter :: Entering_into_mode(string mode){


  for(int i = 0; i < 100; i++){

    if(i < 31 || i > 61)
        cout<<"*";
    else{
          cout<<"YOU ARE UNDER THE "<<mode<<" MODE";
          i = 61;
    }

 }
    cout<<endl;


 }
