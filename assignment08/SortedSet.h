#ifndef _SORTEDSET_H
#define _SORTEDSET_H
#include "IntList.h"
class SortedSet : public IntList
{
    public:
        SortedSet( ); // the default constructor
        SortedSet( const SortedSet & ) ;//the copy constructor
        SortedSet( const IntList & ); //a constructor that is passed an IntList
        ~SortedSet( );
        //Accessors

        bool in( int data );
        const SortedSet& operator|(const SortedSet&);
        const SortedSet& operator&(const SortedSet&);
        //Mutators
    
        void add( int data );
        void push_front( int data );
        void push_back( int data );
        void insert_sorted( int data );
        const SortedSet& operator|= (const SortedSet&);
        const SortedSet & operator&=(const SortedSet&);
};
#endif