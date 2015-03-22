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
#include <fstream>
#include "BBoard.h"

using namespace std;

int main(int argc, char* argv[])
{
   ifstream inFS;
 
   if (argc != 2) {
      cout << endl << "Usage: /.a.out inputFileName" << endl;
      return 0; 
   }
   //cout << "Opening file " << argv[1] << "." << endl;
  // inFS.open(argv[1]);
  string input = argv[1];
  BBoard bb("Welcome to Hau's Amazing Bulletin Board");
  bb.setup(input);
  bb.login();
  bb.run();

  return 0;
}