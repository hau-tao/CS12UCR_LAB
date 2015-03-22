#include <iostream>
#include <string>
using namespace std;
bool palindrome( string s)
{
    string temp ;
    cout <<"original temp " <<temp << endl;
    if (s.length() <=1)
    return 1;
    else if (s.at(0) == s.at(s.length()-1))
    {
        temp = s.substr(1, s.length()-2);
        cout <<"temp " << temp << endl;
        palindrome(temp);
        return 1;
        
    }
    else
    return 0;
    
    
}
int main()
{
    string s;
    cout<<"input string " ;
    cin >>s;
    cout << palindrome(s) <<endl;
    return 0;
}