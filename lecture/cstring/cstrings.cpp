// Corresponding Zyante chapters: Char arrays/C strings, Char library fcts, String library fcts
// Cstrings
//  Provides an introduction to Cstrings and some corresponding functions
//      strcpy(destination,source): copies the cstring "source" to "destination"
//      strlen(string): returns the length of "string"
//      strcmp(value,key): returns whether "value" is the same as "key"
#include <iostream>
#include <cstring>

using namespace std;

// Returns the length of the string "s"
int mystrlen(const char s[]) {
    int count = 0;
    for (/* count */;s[count] != '\0'; ++count) { }
    return count;
}

int main() {
    char message_array[80] = {'H','e','l','l','o',' ','W','o','r','l','d','!','\0'};
    char message[80] = "Hello World!";
    cout << message_array << endl;
    cout <<message<<endl;
    cout << "CString array length (mystrlen): " << mystrlen(message_array) << endl;
    cout << "CString array length (strlen):   " << strlen(message_array) << endl;
    cout << message << endl;
    cout << "CString literal length (mystrlen): " << mystrlen(message) << endl;
    cout << "CString literal length (strlen):   " << strlen(message) << endl;

    char enter_name[] = "Enter your name: ";
    // Can't do this: message = goodbye; // "error: incompatible types in assignment of 'char [8]' to 'char[80]'"
    strcpy(message, enter_name);
    
    char name[80];
    cout << message;
    cin >> name;
    
    // Can't do this: if (name == "Kris") // Compares memory locations 
    if (strcmp(name, "Kris") == 0) {
        cout << "Welcome Kris!" << endl;
    } else {
        cout << "You are not Kris!" << endl;
    }

    return 0;
}
