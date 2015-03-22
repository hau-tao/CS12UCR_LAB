#include <iostream>
#include "IntList.h"
using namespace std;
IntList:: IntList()
{
    head =0;
    tail =0;
}

IntList:: ~ IntList()
{
    while (head !=0)
    pop_front();
    
}
void IntList:: display() const
{
    for( IntNode *cur= head; cur != 0; cur = cur->next)
    {
        if(cur->next !=0)
		cout << cur->data<<" ";
		else
		cout << cur->data;
	}
	
}

void IntList:: push_front( int value )
{
    

    IntNode* temp = new IntNode(value);
    temp-> next = head ;
    head = temp;
    if (tail == 0)
    {
        tail = head;

    }
    
}

void IntList:: push_back ( int value)
{
    if (head == 0 )
    {
       head = new IntNode(value);
       tail = head;

    }
    else 
    {
        tail->next = new IntNode(value);
        tail = tail->next;
        
        
    }
}

void IntList:: pop_front()
{
    if(head==0)
    {
        return;
    }
    IntNode* temp = head;
    head = head->next ;
    delete temp;
        
}

void IntList:: select_sort()
{
    
    IntNode* Smallest;
    for (IntNode *cur = head; cur!=0; cur = cur-> next)
    {
        Smallest = cur;
        for(IntNode *nextNode = cur->next; nextNode != 0; nextNode = nextNode-> next)
        {

            if (nextNode-> data < Smallest-> data)
            {
                Smallest = nextNode;
            }
            
        }
        swap(cur->data,Smallest->data);
    }
    
    
}
void IntList:: insert_sorted( int value )
{
    IntNode *temp = new IntNode( value);
    IntNode *cur = 0;
    IntNode *prev = 0;
    if (head ==0)
    {
        push_back(value);
    }
    else if ( value < head-> data)
    {
        push_front(value);
    }
    else if (value > tail -> data)
    {
        push_back(value);
        
    }
    else
    {
        for (prev = head; prev != 0; prev = prev-> next)
        {
            cur = prev->next;
            if ( prev-> data <= temp -> data && temp->data <= cur-> data )
            {
                prev->next = temp;
                temp->next = cur;
                return;
            }
        }
    
    }
}

void IntList:: remove_duplicates()
{
    IntNode *prev = head;
    IntNode *cur=0;
    if ( head ==0)
    {
        head = tail;
    }
    else
    {
        for ( IntNode* Node = head; Node != 0; Node = Node->next)
        {
        
            prev= Node;
            while (prev->next != 0)
            {
                if(prev->next->data == Node->data)
                {
                    cur = prev->next->next;
                    delete prev->next;
                    prev->next = cur;
                }
                else
                {
                    prev = prev->next;
                    
                }
                
                
            }
            if ( prev->next == 0)
            {
                tail = prev;
                cout << "address tail " << tail << endl;
                cout << "address prev" << prev << endl;
                
            }
            
        }
        
    }
    

}

IntList::IntList( const IntList & sourceList )
{
    head =0;
    tail =0;
    IntNode* current = sourceList.head;
    
    while( current !=0 )
    {
        this->push_back(current->data);
        current = current->next;
    }
    
}

const IntList & IntList:: operator=( const IntList & sourceList )
{
    cout << "overloaded assignment operator" << endl;
    head =0;
    tail =0;
    IntNode* current = sourceList.head;
    
    while( current !=0 )
    {
        this->push_back(current->data);
        current = current->next;
    }
    return *this;
}
void IntList:: clear()
{
    while (head !=0)
    pop_front();
    
}
