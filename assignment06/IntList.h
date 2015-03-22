#ifndef _INTLIST_H
#define _INTLIST_H
struct IntNode
{

    int data;

    IntNode *next;

    IntNode( int data ) : data(data), next(0) {}

};
class IntList
{
    protected:
        IntNode* head ;
        IntNode* tail;
    public:
        IntList();

        ~IntList();

        void display() const;

        void push_front( int value );

        void push_back( int value );

        void pop_front();

        void select_sort();

        void insert_sorted( int value );

        void remove_duplicates();
        // - the copy constructor
        IntList( const IntList & );
        
        // the overloaded assignment operator
        const IntList & operator=( const IntList & );
        // - removes all nodes from the IntList.
        void clear();
};
#endif 


