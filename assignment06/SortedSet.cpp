#include "SortedSet.h"
#include "IntList.h"
#include <iostream>
using namespace std;
SortedSet :: SortedSet()
{
    head =0;
    tail =0;
}

SortedSet::SortedSet( const SortedSet & source )
:IntList(source){}
SortedSet:: SortedSet( const IntList & source )
: IntList(source)
{
    remove_duplicates();
    select_sort();
}
SortedSet::~SortedSet()
{
    clear();
}
void SortedSet:: add(int data) 
{
    IntNode* temp = new IntNode(data);
    IntNode* cur =0;
    IntNode* prev =0;
    if ( head==0)
    {
        IntList::push_back(data);
    }
    else if (data > tail->data)
    {
        IntList::push_back(data);
    }
    else if( data < head->data)
    {
        IntList::push_front(data);
    }

    for( prev = head; prev !=0; prev= prev->next)
    {
        cur = prev->next ;
        if (prev->data < temp->data && cur->data >temp->data )
        {
            
            for (IntNode* last = cur ; last !=0; last=last->next)
            {
                if(last->data == temp-> data)
                {
                    return;
                }
            }
            prev->next = temp;
            temp->next= cur;

        }
        
    }
    
}
void SortedSet::push_front(int data)
{
    add(data);
}
void SortedSet::push_back(int data)
{
    add(data);
}
void SortedSet::insert_sorted(int data)
{
    add(data);
}
const SortedSet& SortedSet:: operator|(const SortedSet& s1)
{
    
    IntNode* cur1 = s1.head;
    IntNode* cur2 = this->head;
    
    while (cur1)
    {
        add(cur1->data);
        cur1 = cur1->next;
    }
    while (cur2)
    {
        add(cur2->data);
        cur2= cur2->next;
    }
    
    return *this;
}

const SortedSet& SortedSet:: operator&(const SortedSet& s2)
{
  
    IntNode* cur1= s2.head;
    IntNode* cur2 = this->head;
    IntNode* temp = cur2;
    head=0;
    tail=0;
    while (cur1)
    {
        while (cur2)
        {
            if (cur1->data == cur2->data)
            {

                add(cur1->data);
                
            }
            cur2 = cur2->next;
        }
        if(cur2==0)
        {
            cur2 = temp;
        }
        
        cur1 = cur1->next;
        
    }
    return *this;
    
}
const SortedSet& SortedSet:: operator|= (const SortedSet&s1)
{
    IntNode* cur1 = s1.head;
    IntNode* cur2 = this->head;
    
    while (cur1)
    {
        add(cur1->data);
        cur1 = cur1->next;
    }
    while (cur2)
    {
        add(cur2->data);
        cur2= cur2->next;
    }
    
    return *this;
    
}
const SortedSet & SortedSet::operator&=(const SortedSet&s2)
{
    IntNode* cur1= s2.head;
    IntNode* cur2 = this->head;
    IntNode* temp = cur2;
    head=0;
    tail=0;
    while (cur1)
    {
        while (cur2)
        {
            if (cur1->data == cur2->data)
            {

                add(cur1->data);
                
            }
            cur2 = cur2->next;
        }
        if(cur2==0)
        {
            cur2 = temp;
        }
        
        cur1 = cur1->next;
        
    }
    return *this;
    
}
bool SortedSet:: in( int data )
{
    IntNode* cur = this->head;

    if ( head ==0)
    {
        return false;
    }
    else
    {
        while(cur)
        {
            if(data == cur->data)
            {
                return true;
            }
            else
            {
                cur = cur->next;
                
            }
            
        }
    }

    return false;
}