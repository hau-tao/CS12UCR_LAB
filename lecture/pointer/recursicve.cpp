#include <iostream>
#include <string>
using namespace std;

string reverseStringRecursively(string str){
    if (str.length() == 1) {
        return str;
    }else{
        cout <<  str.substr(1)<<endl;
        cout << " string at 0 " << str.at(0) << endl;
        
        return reverseStringRecursively(str.substr(1)) + str.at(0);
    }
}

int main()
{
    string str;
    cout<<"Enter the string to reverse : ";
    cin>>str;

    cout<<"The reversed string is : "<<reverseStringRecursively(str);
    return 0;
}