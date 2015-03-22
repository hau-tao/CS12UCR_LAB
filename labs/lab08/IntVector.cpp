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

#include <iostream>

#include "IntList.h"

using namespace std;

void IntList::display() const
{
    for( IntNode *cur= head; cur != 0; cur = cur->next)
    {
        if(cur->next !=0)
		cout << cur->data<<" ";
		else
		cout << cur->data;
	
	}
}

void IntList::reversedList(IntNode * curr)
{
    if (curr != 0)
   { reversedList(curr->next);
    cout << curr-> data << " ";}
}

void IntList::push_front(int value)
{
    IntNode *temp = new IntNode(value);
    temp->next = head;
    head = temp;
    if(tail==0)
    tail=head;
}

void IntList::pop_front()
{
    if(head == 0) return;
    IntNode *temp = head;
    head = head->next;
    delete temp;
    if(head==0)
    tail =0;
}