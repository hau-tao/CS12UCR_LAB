#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include "Message.h"
#include "User.h"
#include "BBoard.h"

BBoard :: BBoard()
 :title("Welcome to Jack's Amazing Bulletin Board"), current_user(User())
{}
BBoard :: BBoard( const string &ttl)
 :title(ttl), current_user(User())
{}
void BBoard:: setup(const string &input_file)
{
    
    ifstream fin;
    string line;
    fin.open(input_file.c_str());
    string Bname, Bpass;        // name and pass variable for BBoard
    add_user(fin,Bname,Bpass);
}
void BBoard:: login()
{
    string nameInput;
    string passInput;
    cout << title << endl;
    do
    {
        cout << "Enter your username ('Q' or 'q' to quit): ";
        cin >> nameInput;
        if (nameInput == "Q" || nameInput == "q")
        {
            cout << "Bye!" << endl;
            exit(0);
        }
        else 
        {
            cout<<"Enter your password: ";
            cin >> passInput;
            
        }
        user_exists(nameInput, passInput);
        
        
        if (user_exists(nameInput, passInput)==0)
        {
            cout << "Invalid Username or Password!" << endl << endl;
        }
        
        
    } while(!user_exists(nameInput, passInput));
    
    cout << "Welcome back " << nameInput <<" !" << endl << endl;
    current_user = get_user(nameInput);
  
    
    
    
}
void BBoard:: run()
{
    string userInput; //input variable
    
    do 
    {
        cout << "Menu" << endl ; 
        cout << "  " << "- Display Messages ('D' or 'd')" << endl;
        cout << "  " << "- Add New Message ('N' or 'n')" << endl;
        cout << "  " << "- Quit ('Q' or 'q')" << endl;
        cout << "Choose an action: ";
        cin >> userInput;  
        cout << endl;
        
        if (userInput == "D" || userInput == "d") 
        {
            display();
        }
        else if( userInput == "N" || userInput == "n" ) 
        {
            add_message();
        }
            
        else if( userInput == "Q" || userInput == "q" ) 
        {
            cout << "Bye!" << endl;
            exit(0);
        }
     
    } while(userInput != "Q" || userInput != "q" );    
    
}

void BBoard:: add_user(istream &infile, const string &name, const string &pass)
{
    string u = name;
    string p =pass;
    while (infile >> u)
    {
        if (u == "end")
        return;
        infile >> p;
        user_list.push_back(User(u,p));
    }
    
}

bool BBoard::user_exists(const string &name, const string &pass) const
{
   int value;
  

   for (unsigned i =0 ; i< user_list.size(); ++i)
   {
       
      if (!user_list.at(i).check(name, pass))
      {
          value =0;
      }
      else
      {
          value =1;
          break;
      }
     
   }
    
    return value; 
}
User BBoard:: get_user(const string &name) const
{
    for (unsigned i = 0; i < user_list.size(); i++) 
    {
        if (name == user_list.at(i).get_username())
        {
            return user_list.at(i); 
            
        }
        
    }
    return User("","");
    
}
void BBoard:: display() const
{
    if (message_list.size() == 0) 
    {
        cout << "Nothing to Display." << endl << endl;
    }
    for (unsigned i =0; i < message_list.size(); ++i)
    {
        cout << "-----------------------------------------------" << endl;
        cout << "Message #" << i+1 <<": ";
        message_list.at(i).display();
       
        
    }
     cout << "-----------------------------------------------" << endl;

}
void BBoard::add_message()
{
    string subject;
    string body;
    
    cout << "Enter Subject: ";
    cin.ignore();
    getline(cin, subject);
    
    cout << endl <<"Enter Body: ";
    getline(cin, body);
  
    message_list.push_back(Message(current_user.get_username(), subject, body));
    cout << "Message Recorded!" << endl << endl;
    
}




