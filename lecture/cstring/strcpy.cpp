#include <iostream>
using namespace std;

char* Strcpy(char*, char*);

int main()
{
	char test[11];
	char testTwo[11] = "Successful"; //10 chars + null terminator
	Strcpy(test, testTwo);
	cout << test << endl;
	return 0;
}

char* Strcpy(char* copyee, char* copier)
{
	int i; //declared outside loop for later use
	for(i = 0; copier[i] != '\0'; i++)
	{
		copyee[i] = copier[i];
	}

	copyee[i] = '\0'; //append null terminator

	return copyee;
}

