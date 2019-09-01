#include <iostream>

using namespace std;

#include "funcs.h"
#include "defs.h"

int main()
{
	PROGRAM_START
	
	int num = get_number();
   
	cout << "The factorial of " << num << " is " << factorial(num) << endl;
	print_current_time();
   	
   	PROGRAM_END
   	
   	return 0;
}
