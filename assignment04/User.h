//  =============== BEGIN ASSESSMENT HEADER ================
/// @file main.cpp
/// @brief assignment03/asignment3.cpp
///
/// @author htao001 [htao001@ucr.edu]
/// @date August 8, 2014
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on   assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#ifndef __USER_H_
#define __USER_H_
#include <iostream>
#include <string>
using namespace std;

class User
{

    private:

        string username;

        string password;

    public:

 //creates a user with empty name and password.

        User();

 // creates a user with given username and password.

        User(const string& uname, const string& pass);

 //returns the username

        string get_username() const;

 // returns true if the stored username/password matches with the

 // parameters. Otherwise returns false.

 // Note that, even though a User with empty name and password is 

 // actually a valid User object (it is the default User), this 

 // function must still return false if given a empty uname string.

        bool check(const string &uname, const string &pass) const;
      
 // sets a new password. This function will not be used in the 

 // current assignment.
 void set_password(const string &newpass);

 };

 //end inc guards
 
#endif