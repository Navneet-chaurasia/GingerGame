#include<bits/stdc++.h>
using namespace std;

#ifndef USER_H
#define USER_H


class User
{
   private:
    char name[50];
    char password[20];

public:
    User();
    void read_data();

    void write_rec();

    void profile_mode();
     string getName();
     char* getPassword();
     void updateName();

     //vector for storing commands available into the profile mode;
  vector<string>actual_profile_commands;




};

#endif // USER_H
