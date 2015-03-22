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
#ifndef __MESSAGE_H_
#define __MESSAGE_H_
#include <iostream>
#include <string>
using namespace std;
class Message

{

    private:

        string author;

        string subject;

        string body;

    public:

 //default constructor

         Message();

 //Constructor with parameters

        Message(const string &athr, 

         const string &sbjct, 

         const string &body);

 //displays the message in the given format. See output specs.

 //Note: R’Sub will require an endl as the last output of this

 //function.

        void display() const;

};

 //end inc guards
 
#endif