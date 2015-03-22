// =============== BEGIN ASSESSMENT HEADER ================
/// @file main.cpp
/// @brief Lab for CS 12 <Spring 2014>
///
/// @author htao001 [htao001@ucr.edu]
/// @date Aug 21,2014
///
/// @par Enrollment Notes
/// Lecture Section: <e.g. 001>
/// @par
/// Lab Section: <e.g. 021>
/// @par
/// TA: Juan Leon
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
// ================== END ASSESSMENT HEADER ===============

#ifndef IntList_H
#define IntList_H
#include <iostream>

struct IntNode
{

 int data;

 IntNode *next;

 IntNode( int data ) : data(data), next(0) {}

};


class IntList
{
    private:
        IntNode * head;
        IntNode * tail;
        void reversedList(IntNode*);
    public:
        IntList() : head(0), tail(0){}
        ~IntList(){while(head!=0) pop_front();}
        void display() const;
        void push_front( int value );
        void pop_front();
        void displayreversely() const
        { reversedList(head);}
};

#endif