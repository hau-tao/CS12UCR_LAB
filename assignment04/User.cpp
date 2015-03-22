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

#include <iostream>
#include <string>
#include "User.h"
using namespace std;
User :: User()
{}
User :: User(const string& uname, const string& pass)
:username(uname), password(pass)
{}
string User :: get_username() const
{
    return username;
    
}
bool User :: check(const string &uname, const string &pass) const
{
    if  (username != uname || password != pass 
    || uname == "" || pass == "")
    {
        return false;
        
    }
    return  true;
}

void User:: set_password(const string &newpass)
{
    
}

