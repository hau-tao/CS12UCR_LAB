//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab10.cpp
/// @brief Lab 10 for CS 13
///
/// @author hau tao[taoquanghau@gmail.com]
/// @date February 25, 2015
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <string>
#include "Music_collection.h"
using namespace std;
Music_collection::Music_collection(){
	max = 100;
	number = 0;
	collection = new Tune[max];

}
Music_collection::Music_collection(int n){
	max = n;
	number =0;
	collection = new Tune[max];

}
Music_collection::Music_collection(const Music_collection &m){
	collection = new Tune[m.max];
	this->number = m.number;
	this->max =m. max;
	for (int i = 0; i < m.number; ++i){
		collection[i] = m.collection[i];
	}
}
bool Music_collection::add_tune(const Tune &t){
	if (number >= max){
		return false;
	}
	++number;
	collection[number - 1] = t;
	return true;

}
bool Music_collection::set_tune(int index, const Tune &t){
	if (index >= this->number){
		return false;
		
	}
	collection[index] = t;
	return true;
}
Music_collection& Music_collection::operator=(const Music_collection &m){
	delete []collection;
	collection = new Tune[m.max];
	this->number = m.number;
	this->max = m.max;
	for (int i = 0; i < m.number; ++i)
	this->collection[i] = m.collection[i];
	return *this;
}
Music_collection :: ~Music_collection(){
	delete[] collection;
}
ostream & operator<<(ostream &out, const Music_collection &m)
{
	for(int i=0; i<m.number; i++)
		out << m.collection[i].get_title() << '\n';
	return out;
}
