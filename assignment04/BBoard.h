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

#ifndef  __BBOARD_H_ 
#define  __BBOARD_H_ 
#include <iostream>
#include <vector>
#include <string>
#include "Message.h"
#include "User.h"
using namespace std;
class BBoard
{
    private:
        string title;
        vector<User> user_list;
        User current_user;
        vector<Message> message_list;
    public:
        BBoard();
        BBoard(const string &ttl);
        void setup(const string &input_file);
        void login();
        void run();
    private:
        void add_user(istream &infile, const string &name, const string &pass);
        bool user_exists(const string &name, const string &pass) const;
        User get_user (const string &name) const;
        void display () const;
        void add_message();
        
        
        
};
#endif




//bboard.h

#ifndef __BBOARD_H_ //inclusion guard
#define __BBOARD_H_

#include "user.h"   //include user.h
#include "message.h"//include message.h

#include <iostream>//iostream and vector
#include <vector>

using namespace std;    //standard namespace

class Bboard {  //Bboard class
    
private:
    string title;   //title of Bboard
    vector<User> user_list; //vector or users
    User current_user;  //current user logged in
    vector<Message> message_list;   //message list vector
    
public:
    Bboard();   //defauly constructor
    Bboard( const string &ttl );    //constructor
    void setup();   //setup function
    void login();   //login function
    void run();     //run function
    
private:    
    void add_user(const string& name, const string& pass);
        //adds user to the user_list vector
    bool user_exists(const string& name, const string& pass) const;
        //checks if the user is a valid user
    User get_user(const string& name) const;
        //gets a user with the name
    void display() const;
        //displays the format for the messages
    void add_message( const string &name );
        //adds a message into the message vector
    
};

#endif //__BBOARD_H_