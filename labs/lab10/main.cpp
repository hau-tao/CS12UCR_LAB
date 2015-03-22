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
using namespace std;
#include "Music_collection.h"

int main()
{

	Tune t1(" anh o dau xong em cuoi xong");
	Tune t2(" ilove ");
	Tune t3 ("1-2-3");
	Tune t4("que em mua nuoc lu");
	Tune t5 ("happy new year");
	Tune t6("nho mot nguoi");

	Music_collection A;

	//add a few tunes to A;
	A.add_tune(t1);
	A.add_tune(t5);

	

	// copy constrctor
	Music_collection B(A);

	//change a Tune in B using set_tune function;
	B.set_tune(0, t6);

	Music_collection C;

	C = B;

	//add a Tune to B;
	B.add_tune(t3);

	//change a Tune in C using set_tune function;
	C.set_tune(2, t2);

	cout <<A << endl;
	cout  <<B << endl;
	cout <<C << endl;
	return 0;

}