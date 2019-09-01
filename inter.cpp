#include <iostream>

using namespace std;

#include "funcs.h"

int get_number()
{
	int num;
   	cout << "Please enter a positive number: ";
   	cin >> num;
   
   	return num;
}

void decorate(E_STYLE style)
{
	switch (style)
	{
		case E_START:
		{
			cout << "===========   WELCOME   ===========" << endl;
			break;
		}
		case E_END:
		{
			cout << "===========   GOODBYE   ===========" << endl;
			break;
		}
	}
}
